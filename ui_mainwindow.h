/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *hookingBox;
    QLabel *hookInfo;
    QPushButton *confirmHook;
    QLabel *statusPre;
    QLabel *currentStatus;
    QGroupBox *valueBox;
    QLabel *sunInfo;
    QLineEdit *sunValue;
    QPushButton *setSun;
    QLabel *cashInfo;
    QPushButton *setCash;
    QLineEdit *cashValue;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(314, 327);
        QPalette palette;
        QBrush brush(QColor(240, 240, 240, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(48, 48, 48, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setIconSize(QSize(200, 200));
        MainWindow->setAnimated(true);
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hookingBox = new QGroupBox(centralwidget);
        hookingBox->setObjectName(QString::fromUtf8("hookingBox"));
        hookingBox->setGeometry(QRect(10, 10, 291, 121));
        QPalette palette1;
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(202, 202, 202, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush3);
        QBrush brush4(QColor(202, 202, 202, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        QBrush brush5(QColor(120, 120, 120, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        QBrush brush6(QColor(0, 0, 0, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        hookingBox->setPalette(palette1);
        hookInfo = new QLabel(hookingBox);
        hookInfo->setObjectName(QString::fromUtf8("hookInfo"));
        hookInfo->setGeometry(QRect(53, 20, 181, 20));
        confirmHook = new QPushButton(hookingBox);
        confirmHook->setObjectName(QString::fromUtf8("confirmHook"));
        confirmHook->setGeometry(QRect(10, 50, 271, 31));
        statusPre = new QLabel(hookingBox);
        statusPre->setObjectName(QString::fromUtf8("statusPre"));
        statusPre->setGeometry(QRect(103, 90, 41, 16));
        currentStatus = new QLabel(hookingBox);
        currentStatus->setObjectName(QString::fromUtf8("currentStatus"));
        currentStatus->setGeometry(QRect(145, 90, 71, 16));
        valueBox = new QGroupBox(centralwidget);
        valueBox->setObjectName(QString::fromUtf8("valueBox"));
        valueBox->setGeometry(QRect(10, 160, 291, 121));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        valueBox->setPalette(palette2);
        sunInfo = new QLabel(valueBox);
        sunInfo->setObjectName(QString::fromUtf8("sunInfo"));
        sunInfo->setGeometry(QRect(52, 20, 61, 20));
        sunValue = new QLineEdit(valueBox);
        sunValue->setObjectName(QString::fromUtf8("sunValue"));
        sunValue->setGeometry(QRect(20, 50, 113, 21));
        QPalette palette3;
        QBrush brush7(QColor(47, 47, 47, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush7);
        QBrush brush8(QColor(35, 35, 35, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        sunValue->setPalette(palette3);
        sunValue->setMaxLength(13);
        sunValue->setAlignment(Qt::AlignCenter);
        setSun = new QPushButton(valueBox);
        setSun->setObjectName(QString::fromUtf8("setSun"));
        setSun->setGeometry(QRect(20, 80, 114, 21));
        cashInfo = new QLabel(valueBox);
        cashInfo->setObjectName(QString::fromUtf8("cashInfo"));
        cashInfo->setGeometry(QRect(191, 20, 61, 20));
        setCash = new QPushButton(valueBox);
        setCash->setObjectName(QString::fromUtf8("setCash"));
        setCash->setGeometry(QRect(160, 80, 114, 21));
        cashValue = new QLineEdit(valueBox);
        cashValue->setObjectName(QString::fromUtf8("cashValue"));
        cashValue->setGeometry(QRect(160, 50, 113, 21));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        cashValue->setPalette(palette4);
        cashValue->setMaxLength(13);
        cashValue->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "PvZHook", nullptr));
        hookingBox->setTitle(QCoreApplication::translate("MainWindow", "Hooking", nullptr));
        hookInfo->setText(QCoreApplication::translate("MainWindow", "Make sure PvZ is open before hooking", nullptr));
        confirmHook->setText(QCoreApplication::translate("MainWindow", "Hook", nullptr));
        statusPre->setText(QCoreApplication::translate("MainWindow", "Status:", nullptr));
        currentStatus->setText(QCoreApplication::translate("MainWindow", "Not Hooked", nullptr));
        valueBox->setTitle(QCoreApplication::translate("MainWindow", "Value Editing", nullptr));
        sunInfo->setText(QCoreApplication::translate("MainWindow", "Sun Value", nullptr));
        sunValue->setPlaceholderText(QCoreApplication::translate("MainWindow", "Value", nullptr));
        setSun->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        cashInfo->setText(QCoreApplication::translate("MainWindow", "Cash Value", nullptr));
        setCash->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        cashValue->setPlaceholderText(QCoreApplication::translate("MainWindow", "Value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
