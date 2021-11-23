#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include <QtGui>
#include <QtWidgets>
#include <QtCore>
#include  "newimage.h"

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

private:
    Ui::menu *ui;
    NewImage *newImageScreen;
};
#endif // MENU_H
