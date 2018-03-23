/********************************************************************************
** Form generated from reading UI file 'Graphics_Engine_2_4.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICS_ENGINE_2_4_H
#define UI_GRAPHICS_ENGINE_2_4_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "oglviewport.h"

QT_BEGIN_NAMESPACE

class Ui_Graphics_Engine_2_4Class
{
public:
    QWidget *centralWidget;
    OGLViewport *openGLViewport;
    QLabel *statusLable;
    QPushButton *importModel;
    QPushButton *transformToolBtn;
    QPushButton *rotateToolBtn;
    QPushButton *scaleToolBtn;

    void setupUi(QMainWindow *Graphics_Engine_2_4Class)
    {
        if (Graphics_Engine_2_4Class->objectName().isEmpty())
            Graphics_Engine_2_4Class->setObjectName(QStringLiteral("Graphics_Engine_2_4Class"));
        Graphics_Engine_2_4Class->resize(1152, 667);
        centralWidget = new QWidget(Graphics_Engine_2_4Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        openGLViewport = new OGLViewport(centralWidget);
        openGLViewport->setObjectName(QStringLiteral("openGLViewport"));
        openGLViewport->setGeometry(QRect(170, 10, 971, 631));
        statusLable = new QLabel(centralWidget);
        statusLable->setObjectName(QStringLiteral("statusLable"));
        statusLable->setGeometry(QRect(0, 639, 1151, 31));
        statusLable->setAutoFillBackground(false);
        statusLable->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        importModel = new QPushButton(centralWidget);
        importModel->setObjectName(QStringLiteral("importModel"));
        importModel->setGeometry(QRect(10, 30, 141, 41));
        transformToolBtn = new QPushButton(centralWidget);
        transformToolBtn->setObjectName(QStringLiteral("transformToolBtn"));
        transformToolBtn->setGeometry(QRect(10, 90, 41, 41));
        rotateToolBtn = new QPushButton(centralWidget);
        rotateToolBtn->setObjectName(QStringLiteral("rotateToolBtn"));
        rotateToolBtn->setGeometry(QRect(60, 90, 41, 41));
        scaleToolBtn = new QPushButton(centralWidget);
        scaleToolBtn->setObjectName(QStringLiteral("scaleToolBtn"));
        scaleToolBtn->setGeometry(QRect(110, 90, 41, 41));
        Graphics_Engine_2_4Class->setCentralWidget(centralWidget);

        retranslateUi(Graphics_Engine_2_4Class);

        QMetaObject::connectSlotsByName(Graphics_Engine_2_4Class);
    } // setupUi

    void retranslateUi(QMainWindow *Graphics_Engine_2_4Class)
    {
        Graphics_Engine_2_4Class->setWindowTitle(QApplication::translate("Graphics_Engine_2_4Class", "Graphics_Engine_2_4", Q_NULLPTR));
        statusLable->setText(QString());
        importModel->setText(QApplication::translate("Graphics_Engine_2_4Class", "Import Model", Q_NULLPTR));
        transformToolBtn->setText(QApplication::translate("Graphics_Engine_2_4Class", "T", Q_NULLPTR));
        rotateToolBtn->setText(QApplication::translate("Graphics_Engine_2_4Class", "R", Q_NULLPTR));
        scaleToolBtn->setText(QApplication::translate("Graphics_Engine_2_4Class", "S", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Graphics_Engine_2_4Class: public Ui_Graphics_Engine_2_4Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICS_ENGINE_2_4_H
