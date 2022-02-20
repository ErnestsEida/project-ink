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
        s << QString::number(width)+"x"+QString::number(height)+"\n";
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

QSize parseSize(QString stringSize)
{
    QStringList temp = stringSize.split("x");
    QSize size(temp[0].toInt(), temp[1].toInt());
    return size;
}

QImage ELKFile::Import(QString path)
{
    QImage *image = nullptr;
    QFile file(path);
    if(file.open(QIODevice::ReadWrite))
    {
        QTextStream s(&file);
        QString dimensions = s.readLine();
        QSize size = parseSize(dimensions);
        image = new QImage(size, QImage::Format_RGB32);
        int row = 0;
        int col = 0;

        while(!s.atEnd())
        {
            QStringList pixels = s.readLine().split("/");
            for(int i = 0;i < pixels.length()-1;i++)
            {
                QStringList pxData = pixels[i].split("-");
                QColor color(pxData[0]);
                for(int u = 0; u < pxData[1].toInt();u++)
                {
                    image->setPixelColor(col, row, color);
                    col++;
                }
            }
            row++;
            col = 0;
        }

        file.close();
    }
    return *image;
}
