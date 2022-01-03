#include "newimage.h"
#include "ui_newimage.h"
#include "menu.h"
#include "cmath"

QString cMeasurment;

NewImage::NewImage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewImage)
{
    ui->setupUi(this);

    this->setMaximumSize(this->width(), maximumHeight());
    this->setWindowTitle("Ink - New Image");

    OptionsManager *manager = new OptionsManager();
    QHash<QString, QString> options = manager->GetOptions()["newimage"];
    delete manager;

    // SET DEFAULT VALUES FOR RADIO GROUPS
    QRadioButton *holder;
    foreach(holder, ui->measurements->findChildren<QRadioButton*>())
    {
        if (holder->objectName() == options["measurments"])
        {
            holder->setChecked(true);
            cMeasurment = holder->objectName();
        }
    }

    foreach(holder, ui->ColorScheme->findChildren<QRadioButton*>())
    {
        if (holder->objectName() == options["colorScheme"])
        {
            holder->setChecked(true);
        }
    }
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
    cMeasurment = measurments;
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

void NewImage::setWidthInput(int val){ ui->widthInput->setValue(val); }

void NewImage::setHeightInput(int val){ ui->heightInput->setValue(val); }

// TO PIX
int InchToPix(int inch){ return inch * 96; }
int CmToPix(int cm){ return round(cm * 37.79527); }
// TO CM
int PixToCm(int px){ return round(px/37.79527); }
int InchToCm(int inch){ return round(inch * 2.54); }
// TO INCH
int CmToInch(int cm){ return round(cm / 2.54); }
int PixToInch(int px){ return round(px / 96); }

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

void NewImage::on_pixels_clicked() // PIXELS TRIGGER
{
    if (cMeasurment == "centimeters")
    {
        setHeightInput(CmToPix(ui->heightInput->value()));
        setWidthInput(CmToPix(ui->widthInput->value()));
        cMeasurment = "pixels";
    }
    else if (cMeasurment == "inches")
    {
        setHeightInput(InchToPix(ui->heightInput->value()));
        setWidthInput(InchToPix(ui->widthInput->value()));
        cMeasurment = "pixels";
    }
}

void NewImage::on_centimeters_clicked() // Centimeter TRIGGERS
{
    if (cMeasurment == "pixels")
    {
        setHeightInput(PixToCm(ui->heightInput->value()));
        setWidthInput(PixToCm(ui->widthInput->value()));
        cMeasurment = "centimeters";
    }
    else if (cMeasurment == "inches")
    {
        setHeightInput(InchToCm(ui->heightInput->value()));
        setWidthInput(InchToCm(ui->widthInput->value()));
        cMeasurment = "centimeters";
    }
}

void NewImage::on_inches_clicked() // Inch TRIGGER
{
    if (cMeasurment == "centimeters")
    {
        setHeightInput(CmToInch(ui->heightInput->value()));
        setWidthInput(CmToInch(ui->widthInput->value()));
        cMeasurment = "inches";
    }
    else if (cMeasurment == "pixels")
    {
        setHeightInput(PixToInch(ui->heightInput->value()));
        setWidthInput(PixToInch(ui->widthInput->value()));
        cMeasurment = "inches";
    }
}

