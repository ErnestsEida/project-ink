#include "elkfile.h"
#include "QDebug"
#include <QtCore>

ELKFile::ELKFile()
{

}

bool ELKFile::Construct(QImage image, QString path)
{
    const int width = image.width();
    const int height = image.height();

    int index = 0;
    QString next_color;
    QString current_color;

    QFile file(path);
    if (file.open(QIODevice::ReadWrite))
    {
        QTextStream s(&file);
        for(int y = 0;y < height; y++)
        {
            for(int x = 0;x < width; x++)
            {
                current_color = image.pixelColor(x, y).name();
                index++;

                if (x+1 < width){
                    next_color = image.pixelColor(x+1, y).name();
                } else {
                    s << current_color+"-"+QString::number(index)+"/\n";
                    index = 0;
                    break;
                }

                if (current_color != next_color){
                    s << current_color+"-"+QString::number(index)+"/";
                    index = 0;
                }
            }
        }
        return true;
        file.close();
    } else {
        return false;
    }
}

QImage ELKFile::Import(QString path, QImage* image)
{

}
