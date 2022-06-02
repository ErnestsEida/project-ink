#ifndef RECENTIMAGEBUTTON_H
#define RECENTIMAGEBUTTON_H

#include <QPushButton>

class RecentImageButton : public QPushButton
{
public:
    RecentImageButton();
    QString *pathToImage;

signals:
    void buttonClicked(QString);

private slots:
    void handleClicked();
};

#endif // RECENTIMAGEBUTTON_H
