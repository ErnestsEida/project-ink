#include "editor.h"
#include "ui_editor.h"

void setup(QMainWindow *window)
{
    window->setWindowTitle("Ink - Editor");
}

Editor::Editor(QWidget *parent, int width, int height, QString colorScheme) :
    QMainWindow(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);
    qDebug() << width << height << colorScheme;
    setup(this);
}

Editor::Editor(QWidget *parent, QString path) :
    QMainWindow(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);
    qDebug() << path;
    setup(this);
}


Editor::~Editor()
{
    delete ui;
}

void Editor::on_actionOptions_triggered() // Options
{
    options = new Options();
    options->setModal(true);
    options->exec();
}

