#include "imageimport.h"
#include "ui_imageimport.h"
#include <QFileDialog>
#include <QImageReader>

ImageImport::ImageImport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ImageImport)
{
    ui->setupUi(this);
    this->setWindowTitle("Ink - Image import");
}

ImageImport::~ImageImport()
{
    delete ui;
}



void ImageImport::on_closeButton_clicked() // CLOSE BUTTON
{
    this->close();
}


void ImageImport::on_acceptButton_clicked() // IMPORT BUTTON
{
    QString path = ui->path->toPlainText();
    editor = new Editor(this, path);
    editor->show();
    this->close();
}


void ImageImport::on_toolButton_clicked() // PATH CHOICE BUTTON
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open Image","/home", "Images (*.png *.jpeg *.jpg *.ppm *.xbm *.xpm *.bmp *.gif)");
    ui->path->setText(fileName);
}

