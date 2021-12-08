#ifndef EDITOR_H
#define EDITOR_H

#include <QMainWindow>
#include "options.h"

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

private slots:
    void on_actionOptions_triggered();

private:
    Ui::Editor *ui;
    Options *options;
};

#endif // EDITOR_H
