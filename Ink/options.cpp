#include "options.h"
#include "ui_options.h"
#include "optionsmanager.h"
#include <QtWidgets>

// SELF DEFINED FUNCTION
void Options::InitOptions()
{
    OptionsManager *manager = new OptionsManager();
    QHash<QString, QHash<QString, QString>> options = manager->GetOptions();
    QHash<QString, QString> attrs;
    delete manager;

    // IMPORT
    attrs = options.value("import");
    int index = ui->importColorScheme->findText(attrs["colorScheme"]);
    ui->importColorScheme->setCurrentIndex(index);
    ui->importPath->setPlainText(attrs["path"]);

    // NEW IMAGE
    attrs = options.value("newimage");
    index = ui->newImageScheme->findText(attrs["colorScheme"]);
    ui->newImageScheme->setCurrentIndex(index);
    index = ui->measurments->findText(attrs["measurments"]);
    ui->measurments->setCurrentIndex(index);

    // SAVING
    attrs = options.value("saving");
    index = ui->savingFormat->findText(attrs["format"]);
    ui->savingFormat->setCurrentIndex(index);
}

QHash<QString, QHash<QString, QString>> Options::SaveOptions()
{
    QHash<QString, QHash<QString, QString>> options;
    QHash<QString, QString> *attributes;

    // IMPORT
    attributes = new QHash<QString, QString>;
    attributes->insert("path", ui->importPath->toPlainText());
    attributes->insert("colorScheme", ui->importColorScheme->currentText());
    options.insert("import", *attributes);

    // NEW IMAGE
    attributes = new QHash<QString, QString>;
    attributes->insert("colorScheme", ui->newImageScheme->currentText());
    attributes->insert("measurments", ui->measurments->currentText());
    options.insert("newimage", *attributes);

    // SAVING
    attributes = new QHash<QString, QString>;
    attributes->insert("format", ui->savingFormat->currentText());
    options.insert("saving", *attributes);

    delete attributes;
    return options;
}
// =====================

Options::Options(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Options)
{
    ui->setupUi(this);
    this->setWindowTitle("Ink - Options");
    ui->scrollArea->setWidgetResizable(true);
    InitOptions();
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
    QMessageBox::information(this, "Info", "Options successfully saved!");
    QHash<QString, QHash<QString, QString>> options = SaveOptions();
    OptionsManager *manager = new OptionsManager();
    manager->SetOptions(options);
    delete manager;
}


void Options::on_toolButton_clicked()
{
    QString previousPath = ui->importPath->toPlainText();
    QString dir = QFileDialog::getExistingDirectory(this, tr("Select Directory"),"/home", QFileDialog::ShowDirsOnly);
    QString newPath = dir == "" ? previousPath : dir;
    ui->importPath->setPlainText(newPath);
}

