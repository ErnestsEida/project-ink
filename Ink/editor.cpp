#include "editor.h"
#include "ui_editor.h"
#include <QtWidgets>

QString imagePath;

void Editor::setup()
{
    this->setWindowTitle("Ink - Editor");
    ui->colorWheelButton->setStyleSheet("background-color: " + drawarea->penColor().name());
    on_penWidthSlider_valueChanged(4);
}

Editor::Editor(QWidget *parent, int width, int height, QString colorScheme) : // EDITOR CONSTRUCTOR WITH PARAMETERS
    QMainWindow(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);

    drawarea = new ScribbleArea;
    drawarea->setMaximumSize(width, height);
    drawarea->setMinimumSize(width, height);

    QScrollArea *sa = ui->scrollArea;
    sa->setWidgetResizable(true);
    sa->setWidget(drawarea);
    sa->setAlignment(Qt::AlignCenter);

    imagePath = "";
    setup();
}

Editor::Editor(QWidget *parent, QString path) : // EDITOR CONSTRUCTOR WITH PATH
    QMainWindow(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);
    QImage *img = new QImage(path);

    drawarea = new ScribbleArea;
    drawarea->openImage(path);
    drawarea->setMaximumSize(img->width(), img->height());
    drawarea->setMinimumSize(img->width(), img->height());
    QScrollArea *sa = ui->scrollArea;
    sa->setWidgetResizable(true);
    sa->setWidget(drawarea);
    sa->setAlignment(Qt::AlignCenter);

    imagePath = path;
    setup();

    delete img;
}

Editor::~Editor()
{
    delete ui;
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

