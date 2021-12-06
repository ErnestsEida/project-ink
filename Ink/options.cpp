#include "options.h"
#include "ui_options.h"

Options::Options(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Options)
{
    ui->setupUi(this);
}

Options::~Options()
{
    delete ui;
}

void Options::on_closeButton_clicked() // Close button
{
    this->close();
}


void Options::on_saveButton_clicked() // Save button
{

}

