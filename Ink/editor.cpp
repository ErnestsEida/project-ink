#include "editor.h"
#include "ui_editor.h"
#include <QtWidgets>

void Editor::setup()
{
    this->setWindowTitle("Ink - Editor");
}

Editor::Editor(QWidget *parent, int width, int height, QString colorScheme) :
    QMainWindow(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);
    setup();

    drawarea = new ScribbleArea;
    drawarea->setMaximumSize(width, height);
    drawarea->setMinimumSize(width, height);

    QScrollArea *sa = ui->scrollArea;
    sa->setWidgetResizable(true);
    sa->setWidget(drawarea);
    sa->setAlignment(Qt::AlignLeft | Qt::AlignTop);
}

Editor::Editor(QWidget *parent, QString path) :
    QMainWindow(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);
    setup();
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
