#ifndef OPTIONS_H
#define OPTIONS_H

#include <QDialog>

namespace Ui {
class Options;
}

class Options : public QDialog
{
    Q_OBJECT

public:
    explicit Options(QWidget *parent = nullptr);
    void InitOptions();
    QHash<QString, QHash<QString, QString>> SaveOptions();
    ~Options();

private slots:
    void on_closeButton_clicked();

    void on_saveButton_clicked();

    void on_toolButton_clicked();

private:
    Ui::Options *ui;
};

#endif // OPTIONS_H
