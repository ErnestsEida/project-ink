#ifndef EDITOR_H
#define EDITOR_H

#include <QMainWindow>
#include "options.h"
#include <QPainter>
#include "scribblearea.h"

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

    void setup();

private slots:
    void on_actionOptions_triggered();

    void on_actionClear_screen_triggered();

    void on_penWidthSlider_valueChanged(int value);

    void on_colorWheelButton_clicked();

private:
    Ui::Editor *ui;
    Options *options;
    ScribbleArea *drawarea;
};

#endif // EDITOR_H
