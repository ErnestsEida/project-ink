#include "quiplashdialog.h"
#include "ui_quiplashdialog.h"

QuiplashDialog::QuiplashDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuiplashDialog)
{
    ui->setupUi(this);
    manager = new OptionsManager();
    ui->pathInput->setText(manager->GetOptions()["import"]["path"]);
}

QuiplashDialog::~QuiplashDialog()
{
    delete manager;
    delete ui;
}

void QuiplashDialog::on_closeButton_clicked()
{
    this->close();
}

bool HasImage(QString string)
{
    bool hasImage = false;
    QStringList imageFormats = {".png", ".jpeg", ".jpg", ".ppm", ".xbm", ".xpm", ".bmp", ".gif"};
    foreach(QString format, imageFormats)
    {
        if(string.contains(format))
        {
            hasImage = true;
        }
    }
    return hasImage;
}

void QuiplashDialog::on_actionButton_clicked()
{
    if (HasImage(ui->pathInput->toPlainText()))
    {
        emit SendDataToQuiplash(ui->pathInput->toPlainText());
        this->close();
    }
}

void QuiplashDialog::on_pathButton_pressed()
{
   QString importPath = manager->GetOptions()["import"]["path"];
   QString fileName = QFileDialog::getOpenFileName(this, "Open Image", importPath, "Images (*.png *.jpeg *.jpg *.ppm *.xbm *.xpm *.bmp *.gif)");
   if (fileName.isEmpty())
   {
       ui->pathInput->setText(importPath);
   } else {
       ui->pathInput->setText(fileName);
   }
}

