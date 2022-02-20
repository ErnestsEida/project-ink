#ifndef ELKFILE_H
#define ELKFILE_H

#include <QImage>

class ELKFile
{
public:
    ELKFile();
    bool Construct(QImage image, QString path);
    QImage Import(QString);
};

#endif // ELKFILE_H
