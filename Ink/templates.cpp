#include "templates.h"
#include "ui_templates.h"
#include "newimage.h"

templates::templates(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::templates)
{
    ui->setupUi(this);
    ui->A4->setChecked(true);
}

templates::~templates()
{
    delete ui;
}

void templates::on_pushButton_clicked()
{
    this->close();
}

QHash<QString, QString> templates::GetTemplate()
{
    // GET SELECTED TEMPLATE
    QHash<QString, QString> returnHash;
    QString templateName;

    foreach(QRadioButton *x, ui->formats->findChildren<QRadioButton*>())
    {
        if (x->isChecked())
        {
            templateName = x->objectName();
        }
    }

    // Return values depending on selected button
    if (templateName == "A4"){
        returnHash.insert("width", QString::number(21));
        returnHash.insert("height",QString::number(30));
        returnHash.insert("measurments", "centimeters");
        returnHash.insert("scheme", "RGB");
    } else if ( templateName == "A5" ){
        returnHash.insert("width", QString::number(15));
        returnHash.insert("height", QString::number(21));
        returnHash.insert("measurments", "centimeters");
        returnHash.insert("scheme", "RGB");
    } else if ( templateName == "HD" ){
        returnHash.insert("width", QString::number(1920));
        returnHash.insert("height", QString::number(1080));
        returnHash.insert("measurments", "pixels");
        returnHash.insert("scheme", "RGB");
    } else if ( templateName == "Icon" ){
        returnHash.insert("width", QString::number(64));
        returnHash.insert("height", QString::number(64));
        returnHash.insert("measurments", "pixels");
        returnHash.insert("scheme", "RGB");
    } else if ( templateName == "Square" ){
        returnHash.insert("width", QString::number(512));
        returnHash.insert("height", QString::number(512));
        returnHash.insert("measurments", "pixels");
        returnHash.insert("scheme", "RGB");
    } else {
        returnHash.insert("width", QString::number(1));
        returnHash.insert("height", QString::number(1));
        returnHash.insert("measurments", "pixels");
        returnHash.insert("scheme", "RGB");
    }
    return returnHash;
}

void templates::on_pushButton_2_clicked()
{
    QHash<QString, QString> values = GetTemplate();
    emit sendTemplate(values["width"].toInt(), values["height"].toInt(), values["scheme"], values["measurments"]);
    this->close();
}

