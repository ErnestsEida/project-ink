/********************************************************************************
** Form generated from reading UI file 'templates.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATES_H
#define UI_TEMPLATES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_templates
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QScrollArea *formats;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QRadioButton *HD;
    QRadioButton *Square;
    QRadioButton *radioButton_6;
    QRadioButton *A5;
    QRadioButton *A4;
    QRadioButton *Icon;
    QLabel *label;
    QFrame *line;

    void setupUi(QDialog *templates)
    {
        if (templates->objectName().isEmpty())
            templates->setObjectName(QString::fromUtf8("templates"));
        templates->resize(480, 640);
        gridLayout = new QGridLayout(templates);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(templates);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background: red;"));

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);

        pushButton_2 = new QPushButton(templates);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background:lightgreen;"));

        gridLayout->addWidget(pushButton_2, 3, 0, 1, 1);

        formats = new QScrollArea(templates);
        formats->setObjectName(QString::fromUtf8("formats"));
        formats->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 460, 529));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        HD = new QRadioButton(scrollAreaWidgetContents);
        HD->setObjectName(QString::fromUtf8("HD"));

        gridLayout_2->addWidget(HD, 1, 0, 1, 1);

        Square = new QRadioButton(scrollAreaWidgetContents);
        Square->setObjectName(QString::fromUtf8("Square"));

        gridLayout_2->addWidget(Square, 2, 0, 1, 1);

        radioButton_6 = new QRadioButton(scrollAreaWidgetContents);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        gridLayout_2->addWidget(radioButton_6, 2, 1, 1, 1);

        A5 = new QRadioButton(scrollAreaWidgetContents);
        A5->setObjectName(QString::fromUtf8("A5"));

        gridLayout_2->addWidget(A5, 0, 1, 1, 1);

        A4 = new QRadioButton(scrollAreaWidgetContents);
        A4->setObjectName(QString::fromUtf8("A4"));

        gridLayout_2->addWidget(A4, 0, 0, 1, 1);

        Icon = new QRadioButton(scrollAreaWidgetContents);
        Icon->setObjectName(QString::fromUtf8("Icon"));

        gridLayout_2->addWidget(Icon, 1, 1, 1, 1);

        formats->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(formats, 2, 0, 1, 2);

        label = new QLabel(templates);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        line = new QFrame(templates);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);


        retranslateUi(templates);

        QMetaObject::connectSlotsByName(templates);
    } // setupUi

    void retranslateUi(QDialog *templates)
    {
        templates->setWindowTitle(QCoreApplication::translate("templates", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("templates", "Close", nullptr));
        pushButton_2->setText(QCoreApplication::translate("templates", "Accept", nullptr));
        HD->setText(QCoreApplication::translate("templates", "16:9 ( 1920x1080 )", nullptr));
        Square->setText(QCoreApplication::translate("templates", "Square ( 512x512 )", nullptr));
        radioButton_6->setText(QCoreApplication::translate("templates", "? ? ? ?", nullptr));
        A5->setText(QCoreApplication::translate("templates", "A5", nullptr));
        A4->setText(QCoreApplication::translate("templates", "A4", nullptr));
        Icon->setText(QCoreApplication::translate("templates", "Icon (64x64)", nullptr));
        label->setText(QCoreApplication::translate("templates", "Templates", nullptr));
    } // retranslateUi

};

namespace Ui {
    class templates: public Ui_templates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATES_H
