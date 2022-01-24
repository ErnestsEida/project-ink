#include "colorbutton.h"
#include <QtDebug>

ColorButton::ColorButton(QWidget *parent) : QPushButton(parent)
{
    color_ = new QColor(0,0,0);
    connect(this, &QPushButton::clicked, this, &ColorButton::handleClicked);
}

void ColorButton::handleClicked()
{
    emit buttonClicked(*color_);
}
