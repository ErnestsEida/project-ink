#ifndef TEMPLATES_H
#define TEMPLATES_H

#include <QDialog>

namespace Ui {
class templates;
}

class templates : public QDialog
{
    Q_OBJECT

public:
    explicit templates(QWidget *parent = nullptr);
    ~templates();
    QHash<QString, QString> GetTemplate();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void sendTemplate(int width, int height, QString colorScheme, QString measurments);

private:
    Ui::templates *ui;
};

#endif // TEMPLATES_H
