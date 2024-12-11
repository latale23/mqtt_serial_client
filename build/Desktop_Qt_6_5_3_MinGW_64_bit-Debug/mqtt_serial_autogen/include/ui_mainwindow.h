/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListView *listView;
    QListWidget *listWidget;
    QTextBrowser *textBrowser;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit_5;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QTextBrowser *textBrowser_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QComboBox *comboBox_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        listView = new QListView(centralwidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(30, 20, 731, 171));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(30, 220, 731, 321));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(40, 230, 711, 301));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(40, 30, 331, 151));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        verticalLayout_2->addWidget(lineEdit_4);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(390, 30, 261, 154));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit_5 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_5->setObjectName("lineEdit_5");

        verticalLayout_5->addWidget(lineEdit_5);

        comboBox = new QComboBox(verticalLayoutWidget_2);
        comboBox->setObjectName("comboBox");

        verticalLayout_5->addWidget(comboBox);

        comboBox_2 = new QComboBox(verticalLayoutWidget_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        verticalLayout_5->addWidget(comboBox_2);

        textBrowser_2 = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser_2->setObjectName("textBrowser_2");

        verticalLayout_5->addWidget(textBrowser_2);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(660, 30, 91, 151));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget_3);
        pushButton->setObjectName("pushButton");

        verticalLayout_6->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget_3);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_6->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget_3);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_6->addWidget(pushButton_3);

        comboBox_3 = new QComboBox(verticalLayoutWidget_3);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");

        verticalLayout_6->addWidget(comboBox_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "\345\256\242\346\210\267\347\253\257 id", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "\345\256\242\346\210\267\347\253\257 \345\257\206\347\240\201", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "mqtt ip / port", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MainWindow", "\350\256\242\351\230\205\344\270\273\351\242\230", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\344\270\273\351\242\230", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "hex", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "text", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\346\270\205\345\261\217", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "    Qos:  0", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "    Qos:  1", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "    Qos:  2", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
