#include "imageconverter.h"

ImageConverter::ImageConverter(){}

QImage ImageConverter::perform(QImage currentImage, QString colorScheme, int sensetivity)
{
    QImage * resultImage = new QImage(currentImage);
    if (colorScheme == "Inverse")
    {
        for(int y = 0;y < currentImage.height(); y++){
            for(int x = 0;x < currentImage.width(); x++){
                QColor color = currentImage.pixelColor(x, y);
                int RGBSum = color.red() + color.green() + color.blue();
                bool result = (RGBSum - (127+sensetivity)) < 0 ? true : false;
                result == true ? resultImage->setPixelColor(x, y, Qt::black) : resultImage->setPixelColor(x, y, Qt::white);
            }
        }
    } else if (colorScheme == "Greyscale"){
        for(int y = 0;y < currentImage.height(); y++){
            for(int x = 0;x < currentImage.width(); x++){
                QColor color = currentImage.pixelColor(x, y);
                int value = (int) (color.red() + color.blue() + color.green()) / 3;
                QColor newColor(value, value, value);
                resultImage->setPixelColor(x, y, newColor);
            }
        }
    }

    return *resultImage;
}
