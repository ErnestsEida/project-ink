/********************************************************************************
** Form generated from reading UI file 'newimage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWIMAGE_H
#define UI_NEWIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_NewImage
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpinBox *heightInput;
    QGroupBox *ColorScheme;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *RGB;
    QRadioButton *Inverse;
    QRadioButton *Greyscale;
    QSpacerItem *verticalSpacer;
    QLabel *ErrorLabel;
    QSpinBox *widthInput;
    QLabel *label;
    QGroupBox *measurements;
    QHBoxLayout *horizontalLayout;
    QRadioButton *pixels;
    QRadioButton *centimeters;
    QRadioButton *inches;
    QFrame *line;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *NewImage)
    {
        if (NewImage->objectName().isEmpty())
            NewImage->setObjectName(QString::fromUtf8("NewImage"));
        NewImage->resize(334, 426);
        gridLayout = new QGridLayout(NewImage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(NewImage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background: red;"));

        gridLayout->addWidget(pushButton_2, 8, 1, 1, 1);

        pushButton_3 = new QPushButton(NewImage);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background: yellow;"));

        gridLayout->addWidget(pushButton_3, 7, 0, 1, 2);

        heightInput = new QSpinBox(NewImage);
        heightInput->setObjectName(QString::fromUtf8("heightInput"));
        heightInput->setMaximumSize(QSize(120, 30));
        heightInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
        heightInput->setMaximum(5000);

        gridLayout->addWidget(heightInput, 4, 1, 1, 1);

        ColorScheme = new QGroupBox(NewImage);
        ColorScheme->setObjectName(QString::fromUtf8("ColorScheme"));
        horizontalLayout_2 = new QHBoxLayout(ColorScheme);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        RGB = new QRadioButton(ColorScheme);
        RGB->setObjectName(QString::fromUtf8("RGB"));

        horizontalLayout_2->addWidget(RGB);

        Inverse = new QRadioButton(ColorScheme);
        Inverse->setObjectName(QString::fromUtf8("Inverse"));

        horizontalLayout_2->addWidget(Inverse);

        Greyscale = new QRadioButton(ColorScheme);
        Greyscale->setObjectName(QString::fromUtf8("Greyscale"));

        horizontalLayout_2->addWidget(Greyscale);


        gridLayout->addWidget(ColorScheme, 6, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 11, 0, 1, 1);

        ErrorLabel = new QLabel(NewImage);
        ErrorLabel->setObjectName(QString::fromUtf8("ErrorLabel"));
        ErrorLabel->setStyleSheet(QString::fromUtf8("color: red;"));
        ErrorLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ErrorLabel, 10, 0, 1, 2);

        widthInput = new QSpinBox(NewImage);
        widthInput->setObjectName(QString::fromUtf8("widthInput"));
        widthInput->setMaximumSize(QSize(120, 30));
        widthInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
        widthInput->setMaximum(5000);

        gridLayout->addWidget(widthInput, 4, 0, 1, 1);

        label = new QLabel(NewImage);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        measurements = new QGroupBox(NewImage);
        measurements->setObjectName(QString::fromUtf8("measurements"));
        horizontalLayout = new QHBoxLayout(measurements);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pixels = new QRadioButton(measurements);
        pixels->setObjectName(QString::fromUtf8("pixels"));

        horizontalLayout->addWidget(pixels);

        centimeters = new QRadioButton(measurements);
        centimeters->setObjectName(QString::fromUtf8("centimeters"));

        horizontalLayout->addWidget(centimeters);

        inches = new QRadioButton(measurements);
        inches->setObjectName(QString::fromUtf8("inches"));

        horizontalLayout->addWidget(inches);


        gridLayout->addWidget(measurements, 2, 0, 1, 2);

        line = new QFrame(NewImage);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 9, 0, 1, 1);

        pushButton = new QPushButton(NewImage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background:lightgreen;"));

        gridLayout->addWidget(pushButton, 8, 0, 1, 1);

        label_2 = new QLabel(NewImage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_3 = new QLabel(NewImage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 3, 1, 1, 1);


        retranslateUi(NewImage);

        QMetaObject::connectSlotsByName(NewImage);
    } // setupUi

    void retranslateUi(QDialog *NewImage)
    {
        NewImage->setWindowTitle(QCoreApplication::translate("NewImage", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("NewImage", "Cancel", nullptr));
        pushButton_3->setText(QCoreApplication::translate("NewImage", "Templates", nullptr));
        ColorScheme->setTitle(QCoreApplication::translate("NewImage", "Color Scheme", nullptr));
        RGB->setText(QCoreApplication::translate("NewImage", "RGB", nullptr));
        Inverse->setText(QCoreApplication::translate("NewImage", "Inverse", nullptr));
        Greyscale->setText(QCoreApplication::translate("NewImage", "Greyscale", nullptr));
        ErrorLabel->setText(QString());
        label->setText(QCoreApplication::translate("NewImage", "New Image", nullptr));
        measurements->setTitle(QCoreApplication::translate("NewImage", "Measurements", nullptr));
        pixels->setText(QCoreApplication::translate("NewImage", "Pixels", nullptr));
        centimeters->setText(QCoreApplication::translate("NewImage", "Centimeters", nullptr));
        inches->setText(QCoreApplication::translate("NewImage", "Inches", nullptr));
        pushButton->setText(QCoreApplication::translate("NewImage", "Create", nullptr));
        label_2->setText(QCoreApplication::translate("NewImage", "Width", nullptr));
        label_3->setText(QCoreApplication::translate("NewImage", "Height", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewImage: public Ui_NewImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWIMAGE_H
