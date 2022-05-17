#include "inversesensetivitycontrols.h"
#include "ui_inversesensetivitycontrols.h"

InverseSensetivityControls::InverseSensetivityControls(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InverseSensetivityControls)
{
    ui->setupUi(this);
    this->setWindowTitle("Inverse Sensetivity");
}

InverseSensetivityControls::~InverseSensetivityControls()
{
    delete ui;
}

void InverseSensetivityControls::on_pushButton_2_clicked()
{
    this->close();
}


void InverseSensetivityControls::on_pushButton_clicked()
{
    emit sendData(ui->sensetivitySlider->value());
    this->close();
}

