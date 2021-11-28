#ifndef NEWIMAGE_H
#define NEWIMAGE_H

#include <QDialog>
#include "templates.h"

namespace Ui {
class NewImage;
}

class NewImage : public QDialog
{
    Q_OBJECT

public:
    explicit NewImage(QWidget *parent = nullptr);
    ~NewImage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

public slots:
    void recieveTemplate(int width, int height, QString colorScheme, QString measurments);

private:
    templates *wTemplate;
    Ui::NewImage *ui;
};

#endif // NEWIMAGE_H
