#ifndef EDITOR_H
#define EDITOR_H

#include <QMainWindow>

namespace Ui {
class Editor;
}

class Editor : public QMainWindow
{
    Q_OBJECT

public:
    explicit Editor(QWidget *parent = nullptr, int width = 1920, int height = 1080, QString colorScheme = "RGB");
    explicit Editor(QWidget *parent = nullptr, QString path = "/home");
    ~Editor();

private:
    Ui::Editor *ui;
};

#endif // EDITOR_H
