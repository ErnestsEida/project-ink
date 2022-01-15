#ifndef COLORBUTTON_H
#define COLORBUTTON_H

#include <QPushButton>

class ColorButton : public QPushButton
{
    Q_OBJECT
public:
    ColorButton();
    QColor *color_;

signals:
    void buttonClicked(QColor);

private slots:
    void handleClicked();
};

#endif // COLORBUTTON_H
