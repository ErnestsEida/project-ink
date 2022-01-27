#ifndef QUIPLASHDIALOG_H
#define QUIPLASHDIALOG_H

#include <QDialog>
#include "optionsmanager.h"

namespace Ui {
class QuiplashDialog;
}

class QuiplashDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QuiplashDialog(QWidget *parent = nullptr);
    ~QuiplashDialog();

private slots:
    void on_closeButton_clicked();

    void on_actionButton_clicked();

    void on_pathButton_pressed();

signals:
    void SendDataToQuiplash(QString path);


private:
    Ui::QuiplashDialog *ui;
    OptionsManager *manager;
};

#endif // QUIPLASHDIALOG_H
