#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include <QtGui>
#include <QtWidgets>
#include <QtCore>
#include  "newimage.h"
#include "imageimport.h"
#include "options.h"

QT_BEGIN_NAMESPACE
namespace Ui { class menu; }
QT_END_NAMESPACE

class menu : public QMainWindow
{
    Q_OBJECT

public:
    menu(QWidget *parent = nullptr);
    ~menu();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_actionOptions_triggered();

private:
    Ui::menu *ui;
    NewImage *newImageScreen;
    ImageImport *imageImportScreen;
    Options *options;
};
#endif // MENU_H
