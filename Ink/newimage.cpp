#include "newimage.h"
#include "ui_newimage.h"
#include "menu.h"
#include "cmath"

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

// SELF DEFINED FUNCTIONS ==========================

void NewImage::recieveTemplate(int width, int height, QString colorScheme, QString measurments)
{
    ui->widthInput->setValue(width);
    ui->heightInput->setValue(height);
    foreach(QRadioButton *x, ui->ColorScheme->findChildren<QRadioButton*>())
    {
        if(x->objectName() == colorScheme)
        {
            x->setChecked(true);
        }
    }

    foreach(QRadioButton *x, ui->measurements->findChildren<QRadioButton*>())
    {
        if(x->objectName() == measurments)
        {
            x->setChecked(true);
        }
    }
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

int InchToPix(int inch)
{
    return inch * 96;
}

int CmToPix(int cm)
{
    return floor(cm * 37.79527);
}

// ===============================================

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
        if(measurment == "centimeters") { width = CmToPix(width); height = CmToPix(height); }
        else if(measurment == "inches") { width = InchToPix(width); height = InchToPix(height); }
        editor = new Editor(NULL, width, height, colorScheme);
        editor->show();
        this->close();
    }
}

void NewImage::on_pushButton_2_clicked() // Cancel Button
{
    this->close();
}


void NewImage::on_pushButton_3_clicked() // Template Button
{
    wTemplate = new templates(this);
    wTemplate->setModal(true);
    connect(wTemplate, &templates::sendTemplate, this, &NewImage::recieveTemplate);
    wTemplate->exec();
}
