#ifndef COLORBUTTON_H
#define COLORBUTTON_H

#include <QPushButton>

class ColorButton : public QPushButton
{
    Q_OBJECT
public:
    ColorButton(QWidget *parent = nullptr);
    QColor *color_;

signals:
    void buttonClicked(QColor);

private slots:
    void handleClicked();
};

#endif // COLORBUTTON_H
