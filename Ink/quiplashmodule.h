#ifndef QUIPLASHMODULE_H
#define QUIPLASHMODULE_H

#include <QImage>
#include "globals.h"

class QuiplashModule
{
public:
    QuiplashModule(QWidget *parent, QImage firstImage, QImage secondImage);
    bool GenerateCFile();
    void GenerateCode(QTextStream &s);
    void CompileCFile();
};

#endif // QUIPLASHMODULE_H
