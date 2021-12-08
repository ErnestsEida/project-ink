#include "optionsmanager.h"

const QString optionsPath = "/home/"+qgetenv("USER")+"/Documents/ink/options.txt";

OptionsManager::OptionsManager(){}

bool OptionsManager::CreateOptionFiles()
{
    QFile file(optionsPath);
    if (file.open(QIODevice::ReadWrite)){
        QTextStream s(&file);
        s << "~import" << "\n";
        s << "path:" << "/home/"+qgetenv("USER")+"/Pictures" << "\n";
        s << "colorScheme:RGB" << "\n";
        s << "~newimage" << "\n";
        s << "colorScheme:RGB" << "\n";
        s << "template:none" << "\n";
        s << "measurments:pixels";
        file.close();
        return true;
    } else {
        return false;
    }
}

QHash<QString, QHash<QString, QString>> OptionsManager::GetOptions()
{
    // INITALIZING RETURN HASH
    QHash<QString, QHash<QString, QString>> ret;
    QHash<QString, QString> *attributes;
    foreach(QString category, categories)
    {
        attributes = new QHash<QString, QString>();
        ret.insert(category, *attributes);
    }

    // GETTING VALUES
    QFile file(optionsPath);
    if (file.open(QIODevice::ReadWrite))
    {
        QTextStream in(&file);
        QString category;
        Attribute *attr;
        QString line;
        while(!in.atEnd())
        {
            line = in.readLine();
            if(line.contains("~"))
            {
                category = line.split("~")[1];
                continue;
            }
            QHash<QString, QString> temps = ret.value(category);
            QStringList values = line.split(":");
            attr = new Attribute(values[1],values[0]);
            temps.insert(attr->name, attr->value);
            ret[category] = temps;
        }
        file.close();
    }
    return ret;
}

void OptionsManager::SetOptions(QHash<QString, QHash<QString, QString>> options)
{
    QFile file(optionsPath);
    file.remove();

    if(file.open(QIODevice::ReadWrite))
    {
        QTextStream s(&file);
        foreach(QString category, categories)
        {
            s << "~" << category << "\n";
            QHash<QString, QString> attrs = options[category];
            foreach(QString key, attrs.keys())
            {
                s << key << ":" << attrs[key] << "\n";
            }
        }
    }
}
