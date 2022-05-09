#ifndef EDITOR_H
#define EDITOR_H

#include <QMainWindow>
#include "options.h"
#include <QPainter>
#include "scribblearea.h"
#include "optionsmanager.h"
#include "quiplashdialog.h"
#include <QCloseEvent>
#include "imageconverter.h"

namespace Ui {
class Editor;
}

class Editor : public QMainWindow
{
    Q_OBJECT

public:
    explicit Editor(QWidget *parent = nullptr, int width = 1920, int height = 1080, QString colorScheme = "RGB");
    explicit Editor(QWidget *parent = nullptr, QString path = "/home", QString colorScheme = "RGB");
    ~Editor();
    QString SaveFileAs(QString);
    void closeEvent(QCloseEvent *event);
    void setup();
    void UpdateColorPalette();

private slots:
    void changeColor(QColor);

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

    void on_actionUndo_triggered();

    void on_actionChange_Size_triggered();



    void on_actionRGB_triggered();

    void on_actionGreyscale_triggered();

    void on_actionInverse_triggered();

    void on_actionDo_quiplash_with_triggered();

    void on_actionELK_triggered();

public slots:
    void QuiplashCollect(QString imagePath);

private:
    Ui::Editor *ui;
    Options *options;
    ScribbleArea *drawarea;
    QuiplashDialog *qDialog;
};

#endif // EDITOR_H
