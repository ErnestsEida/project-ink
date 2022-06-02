#include "recentimagebutton.h"
#include <QDebug>

RecentImageButton::RecentImageButton()
{
    connect(this, &QPushButton::clicked, this, &RecentImageButton::handleClicked);
}

void RecentImageButton::handleClicked(){
    qDebug() << "Button Clicked with path" << this->pathToImage;
}
