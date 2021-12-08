#ifndef OPTIONSMANAGER_H
#define OPTIONSMANAGER_H
#include <QtCore>
#include <QtWidgets>

// ALL OPTION TYPES MUST BE DEFINED HERE!

struct Attribute{
    QString value;
    QString name;
    Attribute(QString value, QString attr_name){
        this->value = value;
        this->name = attr_name;
    }
};

class OptionsManager
{
public:
    QStringList categories = {"import", "newimage", "global"};
    OptionsManager();
    bool CreateOptionFiles();
    QHash<QString, QHash<QString, QString>> GetOptions();
    void SetOptions(QHash<QString, QHash<QString, QString>> options);
};

#endif // OPTIONSMANAGER_H
