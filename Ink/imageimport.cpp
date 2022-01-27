#include "imageimport.h"
#include "optionsmanager.h"
#include "ui_imageimport.h"
#include <QFileDialog>
#include <QImageReader>

QString import_path;

ImageImport::ImageImport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ImageImport)
{
    ui->setupUi(this);
    this->setWindowTitle("Ink - Image import");

    OptionsManager *manager = new OptionsManager();
    import_path = manager->GetOptions()["import"]["path"];
    ui->path->setText(import_path);
    delete manager;
}

ImageImport::~ImageImport()
{
    delete ui;
}

bool ContainsImage(QString string)
{
    bool hasImage = false;
    QStringList imageFormats = {".png", ".jpeg", ".jpg", ".ppm", ".xbm", ".xpm", ".bmp", ".gif", ".elk"};
    foreach(QString format, imageFormats)
    {
        if(string.contains(format))
        {
            hasImage = true;
        }
    }
    return hasImage;
}

void ImageImport::on_closeButton_clicked() // CLOSE BUTTON
{
    this->close();
}


void ImageImport::on_acceptButton_clicked() // IMPORT BUTTON
{
    QString path = ui->path->toPlainText();
    if(ContainsImage(path))
    {
        editor = new Editor(NULL, path);
        editor->show();
        this->close();
    }
    else
    {
        QMessageBox::critical(this, "Error - faulty input", "Provided file isn't supported by program, or file is not specified!");
    }
}


void ImageImport::on_toolButton_clicked() // PATH CHOICE BUTTON
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open Image", import_path, "Images (*.png *.jpeg *.jpg *.ppm *.xbm *.xpm *.bmp *.gif *.elk)");
    if (fileName.isEmpty())
    {
        ui->path->setText(import_path);
    } else {
        ui->path->setText(fileName);
    }
    ui->errorLabel->setText("");
}

