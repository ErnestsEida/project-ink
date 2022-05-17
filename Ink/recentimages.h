#ifndef RECENTIMAGES_H
#define RECENTIMAGES_H

#include "globals.h"

class RecentImages
{
public:
    RecentImages();

    void AddRecentImage(QString);
    QList<QString> LoadRecentImages();
};

#endif // RECENTIMAGES_H
