/********************************************************************************
** Form generated from reading UI file 'editor.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOR_H
#define UI_EDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Editor
{
public:
    QAction *actionOptions;
    QAction *actionClear_screen;
    QAction *actionSave;
    QAction *actionPNG;
    QAction *actionJPEG;
    QAction *actionJPG;
    QAction *actionPPM;
    QAction *actionXBM;
    QAction *actionXPM;
    QAction *actionBMP;
    QAction *actionUndo;
    QAction *actionChange_Size;
    QAction *actionRGB;
    QAction *actionGreyscale;
    QAction *actionInverse;
    QWidget *container;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGroupBox *colorPalette;
    QGridLayout *gridLayout_3;
    QSpinBox *penWidth;
    QSlider *penWidthSlider;
    QPushButton *colorWheelButton;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuPreferences;
    QMenu *menuImage;
    QMenu *menuSave_as;
    QMenu *menuChange_Color_Scheme;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Editor)
    {
        if (Editor->objectName().isEmpty())
            Editor->setObjectName(QString::fromUtf8("Editor"));
        Editor->resize(1280, 720);
        Editor->setMinimumSize(QSize(320, 180));
        actionOptions = new QAction(Editor);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        actionClear_screen = new QAction(Editor);
        actionClear_screen->setObjectName(QString::fromUtf8("actionClear_screen"));
        actionSave = new QAction(Editor);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionPNG = new QAction(Editor);
        actionPNG->setObjectName(QString::fromUtf8("actionPNG"));
        actionJPEG = new QAction(Editor);
        actionJPEG->setObjectName(QString::fromUtf8("actionJPEG"));
        actionJPG = new QAction(Editor);
        actionJPG->setObjectName(QString::fromUtf8("actionJPG"));
        actionPPM = new QAction(Editor);
        actionPPM->setObjectName(QString::fromUtf8("actionPPM"));
        actionXBM = new QAction(Editor);
        actionXBM->setObjectName(QString::fromUtf8("actionXBM"));
        actionXPM = new QAction(Editor);
        actionXPM->setObjectName(QString::fromUtf8("actionXPM"));
        actionBMP = new QAction(Editor);
        actionBMP->setObjectName(QString::fromUtf8("actionBMP"));
        actionUndo = new QAction(Editor);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionChange_Size = new QAction(Editor);
        actionChange_Size->setObjectName(QString::fromUtf8("actionChange_Size"));
        actionRGB = new QAction(Editor);
        actionRGB->setObjectName(QString::fromUtf8("actionRGB"));
        actionGreyscale = new QAction(Editor);
        actionGreyscale->setObjectName(QString::fromUtf8("actionGreyscale"));
        actionInverse = new QAction(Editor);
        actionInverse->setObjectName(QString::fromUtf8("actionInverse"));
        container = new QWidget(Editor);
        container->setObjectName(QString::fromUtf8("container"));
        container->setMinimumSize(QSize(320, 180));
        gridLayout = new QGridLayout(container);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(container);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1074, 656));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 1, 1, 1);

        groupBox = new QGroupBox(container);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(180, 0));
        groupBox->setMaximumSize(QSize(180, 16777215));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        colorPalette = new QGroupBox(groupBox);
        colorPalette->setObjectName(QString::fromUtf8("colorPalette"));
        gridLayout_3 = new QGridLayout(colorPalette);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));

        gridLayout_2->addWidget(colorPalette, 6, 0, 1, 4);

        penWidth = new QSpinBox(groupBox);
        penWidth->setObjectName(QString::fromUtf8("penWidth"));
        penWidth->setReadOnly(true);
        penWidth->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_2->addWidget(penWidth, 3, 3, 1, 1);

        penWidthSlider = new QSlider(groupBox);
        penWidthSlider->setObjectName(QString::fromUtf8("penWidthSlider"));
        penWidthSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(penWidthSlider, 4, 0, 1, 4);

        colorWheelButton = new QPushButton(groupBox);
        colorWheelButton->setObjectName(QString::fromUtf8("colorWheelButton"));

        gridLayout_2->addWidget(colorWheelButton, 5, 0, 1, 4);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 3, 0, 1, 3);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        Editor->setCentralWidget(container);
        menubar = new QMenuBar(Editor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 22));
        menuPreferences = new QMenu(menubar);
        menuPreferences->setObjectName(QString::fromUtf8("menuPreferences"));
        menuImage = new QMenu(menubar);
        menuImage->setObjectName(QString::fromUtf8("menuImage"));
        menuSave_as = new QMenu(menuImage);
        menuSave_as->setObjectName(QString::fromUtf8("menuSave_as"));
        menuChange_Color_Scheme = new QMenu(menuImage);
        menuChange_Color_Scheme->setObjectName(QString::fromUtf8("menuChange_Color_Scheme"));
        Editor->setMenuBar(menubar);
        statusbar = new QStatusBar(Editor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Editor->setStatusBar(statusbar);

        menubar->addAction(menuImage->menuAction());
        menubar->addAction(menuPreferences->menuAction());
        menuPreferences->addAction(actionOptions);
        menuImage->addAction(actionClear_screen);
        menuImage->addAction(actionSave);
        menuImage->addAction(menuSave_as->menuAction());
        menuImage->addAction(actionUndo);
        menuImage->addAction(actionChange_Size);
        menuImage->addAction(menuChange_Color_Scheme->menuAction());
        menuSave_as->addAction(actionPNG);
        menuSave_as->addAction(actionJPEG);
        menuSave_as->addAction(actionJPG);
        menuSave_as->addAction(actionPPM);
        menuSave_as->addAction(actionXBM);
        menuSave_as->addAction(actionXPM);
        menuSave_as->addAction(actionBMP);
        menuChange_Color_Scheme->addAction(actionRGB);
        menuChange_Color_Scheme->addAction(actionGreyscale);
        menuChange_Color_Scheme->addAction(actionInverse);

        retranslateUi(Editor);
        QObject::connect(penWidthSlider, &QSlider::valueChanged, penWidth, &QSpinBox::setValue);

        QMetaObject::connectSlotsByName(Editor);
    } // setupUi

    void retranslateUi(QMainWindow *Editor)
    {
        Editor->setWindowTitle(QCoreApplication::translate("Editor", "MainWindow", nullptr));
        actionOptions->setText(QCoreApplication::translate("Editor", "Options", nullptr));
        actionClear_screen->setText(QCoreApplication::translate("Editor", "Clear screen", nullptr));
#if QT_CONFIG(shortcut)
        actionClear_screen->setShortcut(QCoreApplication::translate("Editor", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("Editor", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("Editor", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPNG->setText(QCoreApplication::translate("Editor", "PNG", nullptr));
        actionJPEG->setText(QCoreApplication::translate("Editor", "JPEG", nullptr));
        actionJPG->setText(QCoreApplication::translate("Editor", "JPG", nullptr));
        actionPPM->setText(QCoreApplication::translate("Editor", "PPM", nullptr));
        actionXBM->setText(QCoreApplication::translate("Editor", "XBM", nullptr));
        actionXPM->setText(QCoreApplication::translate("Editor", "XPM", nullptr));
        actionBMP->setText(QCoreApplication::translate("Editor", "BMP", nullptr));
        actionUndo->setText(QCoreApplication::translate("Editor", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("Editor", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionChange_Size->setText(QCoreApplication::translate("Editor", "Change Size", nullptr));
        actionRGB->setText(QCoreApplication::translate("Editor", "RGB", nullptr));
        actionGreyscale->setText(QCoreApplication::translate("Editor", "Greyscale", nullptr));
        actionInverse->setText(QCoreApplication::translate("Editor", "Inverse", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Editor", "Tools", nullptr));
        colorPalette->setTitle(QCoreApplication::translate("Editor", "Colors", nullptr));
        colorWheelButton->setText(QString());
        label->setText(QCoreApplication::translate("Editor", "Pen width", nullptr));
        menuPreferences->setTitle(QCoreApplication::translate("Editor", "Preferences", nullptr));
        menuImage->setTitle(QCoreApplication::translate("Editor", "Image", nullptr));
        menuSave_as->setTitle(QCoreApplication::translate("Editor", "Save as...", nullptr));
        menuChange_Color_Scheme->setTitle(QCoreApplication::translate("Editor", "Change Color Scheme", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Editor: public Ui_Editor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOR_H
