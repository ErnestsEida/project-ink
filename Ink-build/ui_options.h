/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Options
{
public:
    QGridLayout *gridLayout;
    QPushButton *closeButton;
    QLabel *label;
    QPushButton *saveButton;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *optionsScroll;
    QVBoxLayout *verticalLayout;
    QGroupBox *importSettings;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *label_2;
    QPlainTextEdit *importPath;
    QToolButton *toolButton;
    QComboBox *importColorScheme;
    QGroupBox *newImageSettings;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QComboBox *newImageScheme;
    QLabel *label_7;
    QComboBox *measurments;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QComboBox *savingFormat;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Options)
    {
        if (Options->objectName().isEmpty())
            Options->setObjectName(QString::fromUtf8("Options"));
        Options->resize(360, 620);
        Options->setMaximumSize(QSize(360, 620));
        gridLayout = new QGridLayout(Options);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        closeButton = new QPushButton(Options);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setStyleSheet(QString::fromUtf8("background:red;"));

        gridLayout->addWidget(closeButton, 4, 0, 1, 1);

        label = new QLabel(Options);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        saveButton = new QPushButton(Options);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setStyleSheet(QString::fromUtf8("background:lightgreen;"));

        gridLayout->addWidget(saveButton, 4, 1, 1, 1);

        line = new QFrame(Options);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        scrollArea = new QScrollArea(Options);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        optionsScroll = new QWidget();
        optionsScroll->setObjectName(QString::fromUtf8("optionsScroll"));
        optionsScroll->setGeometry(QRect(0, 0, 326, 517));
        verticalLayout = new QVBoxLayout(optionsScroll);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        importSettings = new QGroupBox(optionsScroll);
        importSettings->setObjectName(QString::fromUtf8("importSettings"));
        gridLayout_2 = new QGridLayout(importSettings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(importSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(importSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        importPath = new QPlainTextEdit(importSettings);
        importPath->setObjectName(QString::fromUtf8("importPath"));
        importPath->setMaximumSize(QSize(16777215, 30));

        gridLayout_2->addWidget(importPath, 1, 0, 1, 1);

        toolButton = new QToolButton(importSettings);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        gridLayout_2->addWidget(toolButton, 1, 1, 1, 1);

        importColorScheme = new QComboBox(importSettings);
        importColorScheme->addItem(QString());
        importColorScheme->addItem(QString());
        importColorScheme->addItem(QString());
        importColorScheme->setObjectName(QString::fromUtf8("importColorScheme"));

        gridLayout_2->addWidget(importColorScheme, 3, 0, 1, 2);


        verticalLayout->addWidget(importSettings);

        newImageSettings = new QGroupBox(optionsScroll);
        newImageSettings->setObjectName(QString::fromUtf8("newImageSettings"));
        verticalLayout_3 = new QVBoxLayout(newImageSettings);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(newImageSettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        newImageScheme = new QComboBox(newImageSettings);
        newImageScheme->addItem(QString());
        newImageScheme->addItem(QString());
        newImageScheme->addItem(QString());
        newImageScheme->setObjectName(QString::fromUtf8("newImageScheme"));

        verticalLayout_3->addWidget(newImageScheme);

        label_7 = new QLabel(newImageSettings);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_3->addWidget(label_7);

        measurments = new QComboBox(newImageSettings);
        measurments->addItem(QString());
        measurments->addItem(QString());
        measurments->addItem(QString());
        measurments->setObjectName(QString::fromUtf8("measurments"));

        verticalLayout_3->addWidget(measurments);


        verticalLayout->addWidget(newImageSettings);

        groupBox = new QGroupBox(optionsScroll);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        savingFormat = new QComboBox(groupBox);
        savingFormat->addItem(QString());
        savingFormat->addItem(QString());
        savingFormat->addItem(QString());
        savingFormat->addItem(QString());
        savingFormat->addItem(QString());
        savingFormat->addItem(QString());
        savingFormat->addItem(QString());
        savingFormat->addItem(QString());
        savingFormat->setObjectName(QString::fromUtf8("savingFormat"));

        gridLayout_3->addWidget(savingFormat, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(optionsScroll);

        gridLayout->addWidget(scrollArea, 3, 0, 1, 2);


        retranslateUi(Options);

        QMetaObject::connectSlotsByName(Options);
    } // setupUi

    void retranslateUi(QDialog *Options)
    {
        Options->setWindowTitle(QCoreApplication::translate("Options", "Dialog", nullptr));
        closeButton->setText(QCoreApplication::translate("Options", "Close", nullptr));
        label->setText(QCoreApplication::translate("Options", "Options", nullptr));
        saveButton->setText(QCoreApplication::translate("Options", "Save", nullptr));
        importSettings->setTitle(QCoreApplication::translate("Options", "Import defaults", nullptr));
        label_3->setText(QCoreApplication::translate("Options", "Color scheme", nullptr));
        label_2->setText(QCoreApplication::translate("Options", "Path", nullptr));
        toolButton->setText(QCoreApplication::translate("Options", "...", nullptr));
        importColorScheme->setItemText(0, QCoreApplication::translate("Options", "RGB", nullptr));
        importColorScheme->setItemText(1, QCoreApplication::translate("Options", "Inverse", nullptr));
        importColorScheme->setItemText(2, QCoreApplication::translate("Options", "Greyscale", nullptr));

        newImageSettings->setTitle(QCoreApplication::translate("Options", "New image defaults", nullptr));
        label_4->setText(QCoreApplication::translate("Options", "Color scheme", nullptr));
        newImageScheme->setItemText(0, QCoreApplication::translate("Options", "RGB", nullptr));
        newImageScheme->setItemText(1, QCoreApplication::translate("Options", "Inverse", nullptr));
        newImageScheme->setItemText(2, QCoreApplication::translate("Options", "Greyscale", nullptr));

        label_7->setText(QCoreApplication::translate("Options", "Measurments", nullptr));
        measurments->setItemText(0, QCoreApplication::translate("Options", "pixels", nullptr));
        measurments->setItemText(1, QCoreApplication::translate("Options", "inches", nullptr));
        measurments->setItemText(2, QCoreApplication::translate("Options", "centimeters", nullptr));

        groupBox->setTitle(QCoreApplication::translate("Options", "Saving", nullptr));
        savingFormat->setItemText(0, QCoreApplication::translate("Options", "png", nullptr));
        savingFormat->setItemText(1, QCoreApplication::translate("Options", "jpeg", nullptr));
        savingFormat->setItemText(2, QCoreApplication::translate("Options", "jpg", nullptr));
        savingFormat->setItemText(3, QCoreApplication::translate("Options", "ppm", nullptr));
        savingFormat->setItemText(4, QCoreApplication::translate("Options", "xbm", nullptr));
        savingFormat->setItemText(5, QCoreApplication::translate("Options", "xpm", nullptr));
        savingFormat->setItemText(6, QCoreApplication::translate("Options", "bmp", nullptr));
        savingFormat->setItemText(7, QCoreApplication::translate("Options", "elk", nullptr));

        label_5->setText(QCoreApplication::translate("Options", "Format", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Options: public Ui_Options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
