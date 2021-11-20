#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::menu)
{
    ui->setupUi(this);
    this->setWindowTitle("Ink - Menu");
    this->setFixedSize(this->width(), this->height());
}

menu::~menu()
{
    delete ui;
}


void menu::on_pushButton_clicked() // New Image
{

}

