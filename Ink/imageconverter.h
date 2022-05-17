#ifndef IMAGECONVERTER_H
#define IMAGECONVERTER_H

#include <QtCore>
#include <QtGui>

class ImageConverter
{
public:
    ImageConverter();

    QImage perform(QImage, QString, int);
};

#endif // IMAGECONVERTER_H
