#include "newimage.h"
#include "ui_newimage.h"
#include "menu.h"

NewImage::NewImage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewImage)
{
    ui->setupUi(this);
    this->setMaximumSize(this->width(), maximumHeight());
    this->setWindowTitle("Ink - New Image");

    // SET DEFAULT VALUES FOR RADIO GROUPS
    ui->pixels->setChecked(true);
    ui->RGB->setChecked(true);
}

NewImage::~NewImage()
{
    delete ui;
}

void NewImage::on_pushButton_clicked() // Create Button
{
    QString measurment;
    QString colorScheme;
    int width;
    int height;
    // GET MEASURMENTS
    foreach(QRadioButton *x, ui->measurements->findChildren<QRadioButton*>())
    {
        if(x->isChecked())
        {
            measurment = x->objectName();
            qDebug() << measurment;
        }
    }

    // GET VALUES
}

void NewImage::on_pushButton_2_clicked() // Cancel Button
{
    this->close();
}


void NewImage::on_pushButton_3_clicked() // Template Button
{

}

