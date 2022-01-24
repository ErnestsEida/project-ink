/********************************************************************************
** Form generated from reading UI file 'imageimport.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEIMPORT_H
#define UI_IMAGEIMPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_ImageImport
{
public:
    QGridLayout *gridLayout;
    QPushButton *acceptButton;
    QPushButton *closeButton;
    QToolButton *toolButton;
    QTextEdit *path;
    QLabel *errorLabel;

    void setupUi(QDialog *ImageImport)
    {
        if (ImageImport->objectName().isEmpty())
            ImageImport->setObjectName(QString::fromUtf8("ImageImport"));
        ImageImport->resize(480, 180);
        ImageImport->setMinimumSize(QSize(480, 120));
        ImageImport->setMaximumSize(QSize(480, 180));
        gridLayout = new QGridLayout(ImageImport);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        acceptButton = new QPushButton(ImageImport);
        acceptButton->setObjectName(QString::fromUtf8("acceptButton"));
        acceptButton->setStyleSheet(QString::fromUtf8("background:lightgreen;"));

        gridLayout->addWidget(acceptButton, 1, 1, 1, 1);

        closeButton = new QPushButton(ImageImport);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setStyleSheet(QString::fromUtf8("background:red;"));

        gridLayout->addWidget(closeButton, 1, 0, 1, 1);

        toolButton = new QToolButton(ImageImport);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        gridLayout->addWidget(toolButton, 0, 2, 1, 1);

        path = new QTextEdit(ImageImport);
        path->setObjectName(QString::fromUtf8("path"));
        path->setMaximumSize(QSize(100000, 30));

        gridLayout->addWidget(path, 0, 0, 1, 2);

        errorLabel = new QLabel(ImageImport);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        errorLabel->setMaximumSize(QSize(16777215, 30));
        errorLabel->setStyleSheet(QString::fromUtf8("color:red;"));
        errorLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(errorLabel, 2, 0, 1, 2);


        retranslateUi(ImageImport);

        QMetaObject::connectSlotsByName(ImageImport);
    } // setupUi

    void retranslateUi(QDialog *ImageImport)
    {
        ImageImport->setWindowTitle(QCoreApplication::translate("ImageImport", "Dialog", nullptr));
        acceptButton->setText(QCoreApplication::translate("ImageImport", "Import", nullptr));
        closeButton->setText(QCoreApplication::translate("ImageImport", "Close", nullptr));
        toolButton->setText(QCoreApplication::translate("ImageImport", "...", nullptr));
        errorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImageImport: public Ui_ImageImport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEIMPORT_H
