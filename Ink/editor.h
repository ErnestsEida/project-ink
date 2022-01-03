#ifndef EDITOR_H
#define EDITOR_H

#include <QMainWindow>
#include "options.h"
#include <QPainter>
#include "scribblearea.h"
#include "optionsmanager.h"

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
    QString SaveFileAs(QString);
    void setup();

private slots:
    void on_actionOptions_triggered();

    void on_actionClear_screen_triggered();

    void on_penWidthSlider_valueChanged(int value);

    void on_colorWheelButton_clicked();

    void on_actionPNG_triggered();

    void on_actionJPEG_triggered();

    void on_actionJPG_triggered();

    void on_actionPPM_triggered();

    void on_actionXBM_triggered();

    void on_actionXPM_triggered();

    void on_actionBMP_triggered();

    void on_actionSave_triggered();

private:
    Ui::Editor *ui;
    Options *options;
    ScribbleArea *drawarea;
};

#endif // EDITOR_H
