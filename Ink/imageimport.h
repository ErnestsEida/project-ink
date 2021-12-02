#ifndef IMAGEIMPORT_H
#define IMAGEIMPORT_H

#include <QDialog>
#include "editor.h"

namespace Ui {
class ImageImport;
}

class ImageImport : public QDialog
{
    Q_OBJECT

public:
    explicit ImageImport(QWidget *parent = nullptr);
    ~ImageImport();

private slots:
    void on_closeButton_clicked();

    void on_acceptButton_clicked();

    void on_toolButton_clicked();

private:
    Ui::ImageImport *ui;
    Editor *editor;
};

#endif // IMAGEIMPORT_H
