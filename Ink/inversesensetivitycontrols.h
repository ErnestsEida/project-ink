#ifndef INVERSESENSETIVITYCONTROLS_H
#define INVERSESENSETIVITYCONTROLS_H

#include <QDialog>

namespace Ui {
class InverseSensetivityControls;
}

class InverseSensetivityControls : public QDialog
{
    Q_OBJECT

public:
    explicit InverseSensetivityControls(QWidget *parent = nullptr);
    ~InverseSensetivityControls();
signals:
    void sendData(int value);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::InverseSensetivityControls *ui;
};

#endif // INVERSESENSETIVITYCONTROLS_H
