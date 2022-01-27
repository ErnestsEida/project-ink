#include "quiplashmodule.h"
#include "QDebug"
#include <QMessageBox>
#include <QtCore>
#include "globals.h"

void CleanupFiles()
{

}

bool ValidForQuiplash(QImage img1, QImage img2)
{
    if(img1.size().width() == img2.size().height())
    {
        return true;
    }
    return false;
}

QuiplashModule::QuiplashModule(QWidget *parent, QImage firstImage, QImage secondImage)
{
    qDebug() << firstImage.size() << secondImage.size();
    if (ValidForQuiplash(firstImage, secondImage))
    {
        GenerateCFile();
    }
    else
    {
        QMessageBox::critical(parent, "Error - incorrect file size", "Provided image dimensions doesn't match up with current image dimensions");
    }
}

void QuiplashModule::CompileCFile()
{
    QFile file(Globals::basePath + "compile");
    if(file.open(QIODevice::ReadWrite))
    {
        file.setPermissions(QFile::ReadOwner|QFile::WriteOwner|QFile::ExeOwner|QFile::ReadGroup|QFile::ExeGroup|QFile::ReadOther|QFile::ExeOther);
        QTextStream s(&file);
        s << "cd " + Globals::basePath << " && ";
        s << "gcc calc.c" << " && ";
        s << "./a.out";
        file.close();
        QProcess::execute(Globals::basePath + "compile");
    }
}
void QuiplashModule::GenerateCode(QTextStream &s)
{
    s << "#include <stdio.h>" << "\n";
    s << "int main(){" << "\n";
    s << "printf(\"Hello World\");" << "\n";
    s << "}";
    CompileCFile();
}

bool QuiplashModule::GenerateCFile()
{
    QFile file(Globals::basePath + "calc.c");
    if (file.open(QIODevice::ReadWrite))
    {
        QTextStream s(&file);
        GenerateCode(s);
        return true;
    }
    else
    {
        return false;
    }
}
