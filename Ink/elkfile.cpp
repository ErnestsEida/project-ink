#include "elkfile.h"
#include "QDebug"

ELKFile::ELKFile()
{

}

bool ELKFile::Construct(QImage image, QString path)
{
    QStringList list;
    int width = image.width();
    int height = image.height();
    for(int y = 0;y < height; y++){
        for(int x = 0;x < width; x++){
            list.append(image.pixelColor(x,y).name());
        }
    }
}

QImage ELKFile::Import(QString path, QImage* image)
{

}
