/********************************************************************************
** Form generated from reading UI file 'tools.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLS_H
#define UI_TOOLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_tools
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpinBox *spinBox;

    void setupUi(QDialog *tools)
    {
        if (tools->objectName().isEmpty())
            tools->setObjectName(QString::fromUtf8("tools"));
        tools->resize(230, 400);
        tools->setMinimumSize(QSize(230, 400));
        tools->setMaximumSize(QSize(230, 400));
        gridLayout_2 = new QGridLayout(tools);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(tools);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        spinBox = new QSpinBox(tools);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout_2->addWidget(spinBox, 0, 1, 1, 1);


        retranslateUi(tools);

        QMetaObject::connectSlotsByName(tools);
    } // setupUi

    void retranslateUi(QDialog *tools)
    {
        tools->setWindowTitle(QCoreApplication::translate("tools", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("tools", "Pen Width", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tools: public Ui_tools {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLS_H
