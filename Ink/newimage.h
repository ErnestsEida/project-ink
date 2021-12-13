#ifndef NEWIMAGE_H
#define NEWIMAGE_H

#include <QDialog>
#include "templates.h"
#include "editor.h"
#include "optionsmanager.h"

namespace Ui {
class NewImage;
}

class NewImage : public QDialog
{
    Q_OBJECT

public:
    explicit NewImage(QWidget *parent = nullptr);
    void setWidthInput(int val);
    void setHeightInput(int val);
    ~NewImage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pixels_clicked();

    void on_centimeters_clicked();

    void on_inches_clicked();

public slots:
    void recieveTemplate(int width, int height, QString colorScheme, QString measurments);

private:
    templates *wTemplate;
    Ui::NewImage *ui;
    Editor *editor;
};

#endif // NEWIMAGE_H
