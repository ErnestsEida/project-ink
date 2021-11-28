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

QHash<QString, int> GetMargins(QString measurment)
{
    QHash<QString, int> margins;
    if (measurment == "pixels")
    {
        margins.insert("min", 1);
        margins.insert("max", 4096);
    }
    else if (measurment == "centimeters")
    {
        margins.insert("min", 1);
        margins.insert("max", 108);
    }
    else
    {
        margins.insert("min", 1);
        margins.insert("max", 42);
    }
    return margins;
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
        }
    }

    // GET COLOR SCHEME
    foreach(QRadioButton *x, ui->ColorScheme->findChildren<QRadioButton*>())
    {
        if(x->isChecked())
        {
            colorScheme = x->objectName();
        }
    }

    // GET VALUE
    width = ui->widthInput->text().toInt();
    height = ui->heightInput->text().toInt();
    QHash<QString, int> margins = GetMargins(measurment);

    // CHECK FOR MARGINS
    if (height > margins["max"] || width > margins["max"] || height < margins["min"] || height < margins["mix"])
    {
        ui->ErrorLabel->setText("Overstepped values on width/height input!");
    }
    else
    {
        // OPEN EDITOR
    }
}

void NewImage::on_pushButton_2_clicked() // Cancel Button
{
    this->close();
}


void NewImage::on_pushButton_3_clicked() // Template Button
{

}
