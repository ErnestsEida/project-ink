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

void menu::on_pushButton_clicked() // New image
{
    newImageScreen = new NewImage(NULL);
    newImageScreen->setModal(true);
    newImageScreen->exec();
}


void menu::on_pushButton_2_clicked() // Import image
{

}

