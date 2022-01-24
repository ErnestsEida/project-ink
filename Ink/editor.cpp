#include "editor.h"
#include "ui_editor.h"
#include "colorbutton.h"
#include <QtWidgets>
#include <QtGlobal>

QString imagePath;
QString imageColorScheme;

void Editor::setup()
{
    this->setWindowTitle("Ink - Editor");
    ui->colorWheelButton->setStyleSheet("background-color: " + drawarea->penColor().name());
    on_penWidthSlider_valueChanged(4);
    UpdateColorPalette();
    srand(time(0));
}

Editor::Editor(QWidget *parent, int width, int height, QString colorScheme) : // EDITOR CONSTRUCTOR WITH PARAMETERS
    QMainWindow(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);

    imageColorScheme = colorScheme;
    drawarea = new ScribbleArea;
    drawarea->setMaximumSize(width, height);
    drawarea->setMinimumSize(width, height);
    drawarea->resize(width, height);
    QScrollArea *sa = ui->scrollArea;
    sa->setWidgetResizable(true);
    sa->setWidget(drawarea);
    sa->setAlignment(Qt::AlignCenter);

    imagePath = "";
    setup();
}

Editor::Editor(QWidget *parent, QString path, QString colorScheme) : // EDITOR CONSTRUCTOR WITH PATH
    QMainWindow(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);
    imageColorScheme = colorScheme;
    QImage *img = new QImage(path);

    drawarea = new ScribbleArea;
    drawarea->openImage(*img);
    drawarea->setMaximumSize(img->width(), img->height());
    drawarea->setMinimumSize(img->width(), img->height());
    drawarea->resize(img->width(), img->height());
    QScrollArea *sa = ui->scrollArea;
    sa->setWidgetResizable(true);
    sa->setWidget(drawarea);
    sa->setAlignment(Qt::AlignCenter);

    imagePath = path;
    setup();

    delete img;
}

void Editor::closeEvent(QCloseEvent *event)
{
    if (imagePath == "")
    {
        QMessageBox msgBox;
        msgBox.setText("Image has been modified.");
        msgBox.setInformativeText("Do you want to save this image?");
        msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard);
        msgBox.setDefaultButton(QMessageBox::Save);
        int status = msgBox.exec();
        if (status == QMessageBox::Save)
        {
            OptionsManager *manager = new OptionsManager;
            QHash<QString, QString> options = manager->GetOptions()["saving"];
            SaveFileAs(options["format"]);
            delete manager;
        }
    }
}

Editor::~Editor()
{
    delete ui;
}

void Editor::UpdateColorPalette()
{
    QGroupBox *colorPalette = ui->colorPalette;
    QGridLayout *grid = dynamic_cast<QGridLayout*>(colorPalette->layout());
    ColorButton *newButton;
    QColor *color;

    while(QPushButton *x = colorPalette->findChild<QPushButton*>())
    {
        delete x;
    }

    if (imageColorScheme == "RGB")
    {
        ui->colorWheelButton->show();
        int row = 0;
        int col = 0;
        for(int i = 0;i < 60;i++)
        {
            color = new QColor(rand()%255, rand()%255, rand()%255);
            newButton = new ColorButton();
            newButton->color_ = color;
            newButton->setStyleSheet("background-color: " + color->name());
            connect(newButton, &ColorButton::buttonClicked, this, &Editor::changeColor);
            grid->addWidget(newButton, row, col);

            if (col == 4)
            {
                col = 0;
                row++;
            }
            else
            {
                col++;
            }
        }
    } else if (imageColorScheme == "Greyscale") {
        ui->colorWheelButton->hide();
        int row = 0;
        int amount;

        for(int i = 0; i < 6; i++)
        {
            amount = (40 * i);
            color = new QColor(amount, amount, amount);
            newButton = new ColorButton();
            newButton->color_ = color;
            newButton->setStyleSheet("background-color: " + color->name());
            connect(newButton, &ColorButton::buttonClicked, this, &Editor::changeColor);
            grid->addWidget(newButton, row, 0);
            row++;
        }
    } else {
        color = new QColor(0,0,0);
        drawarea->setPenColor(*color);
        ui->colorWheelButton->hide();
    }
}

void Editor::changeColor(QColor color)
{
    drawarea->setPenColor(color);
    ui->colorWheelButton->setStyleSheet("background-color: " + color.name());
}

void Editor::on_actionOptions_triggered() // Options
{
    options = new Options();
    options->setModal(true);
    options->exec();
}

void Editor::on_actionClear_screen_triggered()
{
    drawarea->clearImage();
}


void Editor::on_penWidthSlider_valueChanged(int value)
{
    drawarea->setPenWidth(value);
    ui->penWidth->setValue(value);
}


void Editor::on_colorWheelButton_clicked()
{
    QColor color = QColorDialog::getColor(drawarea->penColor(), this, "Choose pen color");
    drawarea->setPenColor(color);
    ui->colorWheelButton->setStyleSheet("background-color: " + color.name());
}

QString Editor::SaveFileAs(QString format)
{
    QString filename = QFileDialog::getSaveFileName(this, "Save file", "/home/"+ qgetenv("USER")+"/untitled."+format);
    drawarea->saveImage(filename);
    return filename;
}

void Editor::on_actionPNG_triggered()
{
    imagePath = SaveFileAs("png");
}


void Editor::on_actionJPEG_triggered()
{
    imagePath = SaveFileAs("jpeg");
}


void Editor::on_actionJPG_triggered()
{
    imagePath = SaveFileAs("jpg");
}


void Editor::on_actionPPM_triggered()
{
    imagePath = SaveFileAs("ppm");
}


void Editor::on_actionXBM_triggered()
{
    imagePath = SaveFileAs("xbm");
}


void Editor::on_actionXPM_triggered()
{
    imagePath = SaveFileAs("xpm");
}


void Editor::on_actionBMP_triggered()
{
    imagePath = SaveFileAs("bmp");
}


void Editor::on_actionSave_triggered()
{
    if (imagePath == "")
    {
        QString format;
        OptionsManager *manager = new OptionsManager();
        QHash<QString, QString> options = manager->GetOptions()["saving"];
        format = options["format"];
        imagePath = SaveFileAs(format);
        delete manager;
    }
    else
    {
        drawarea->saveImage(imagePath);
    }
}


void Editor::on_actionUndo_triggered()
{
    drawarea->undo();
}


void Editor::on_actionChange_Size_triggered()
{
    QSize currentImage = drawarea->image.size();
    qDebug() << QInputDialog::getInt(this,"New width", "Width:", currentImage.width(), 0, 4096);
    qDebug() << QInputDialog::getInt(this,"New height", "Height:", currentImage.height(), 0, 4096);
}


void Editor::on_actionRGB_triggered()
{
    imageColorScheme = "RGB";
    UpdateColorPalette();
}


void Editor::on_actionGreyscale_triggered()
{
    imageColorScheme = "Greyscale";
    UpdateColorPalette();
}


void Editor::on_actionInverse_triggered()
{
    imageColorScheme = "Inverse";
    UpdateColorPalette();
}

