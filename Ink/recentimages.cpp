#include "recentimages.h"

const QString filename = "ri_storage.txt";

RecentImages::RecentImages(){}

void RecentImages::AddRecentImage(QString pathToImage){
    QFile f(Globals::basePath+filename);
    if(f.open(QIODevice::WriteOnly | QIODevice::Append)){
        QTextStream s(&f);
        s << pathToImage << "\n";
    }
    f.close();
}

QList<QString> RecentImages::LoadRecentImages(){
    QList<QString> returnList;
    QFile f(Globals::basePath+filename);
    if(f.open(QIODevice::ReadWrite)){
        QTextStream s(&f);
        QString line;
        while (!s.atEnd()) {
            line = s.readLine();
            returnList.append(line);
        }
    }
    f.close();
    return returnList;
}
