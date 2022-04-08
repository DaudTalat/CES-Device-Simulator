/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_7;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_11;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_10;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *intensityUp;
    QPushButton *intensityDown;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QProgressBar *intensityBar;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_4;
    QLabel *label;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *radioButton_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QSpinBox *spinBox_2;
    QCheckBox *checkBox_3;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QPushButton *powerOn;
    QPushButton *powerOff;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QProgressBar *batteryLevel;
    QPushButton *endSession;
    QPushButton *startSession;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(640, 426);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 290, 54, 17));
        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(380, 160, 221, 133));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_9 = new QLabel(verticalLayoutWidget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAutoFillBackground(false);
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_9);

        label_10 = new QLabel(verticalLayoutWidget_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_10);


        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_11 = new QLabel(verticalLayoutWidget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_7->addWidget(label_11);

        radioButton_9 = new QRadioButton(verticalLayoutWidget_4);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));

        verticalLayout_7->addWidget(radioButton_9);

        radioButton_8 = new QRadioButton(verticalLayoutWidget_4);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));

        verticalLayout_7->addWidget(radioButton_8);

        radioButton_10 = new QRadioButton(verticalLayoutWidget_4);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));

        verticalLayout_7->addWidget(radioButton_10);


        verticalLayout_4->addLayout(verticalLayout_7);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 331, 341));
        verticalLayoutWidget_3 = new QWidget(groupBox);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(30, 230, 261, 91));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        intensityUp = new QPushButton(verticalLayoutWidget_3);
        intensityUp->setObjectName(QString::fromUtf8("intensityUp"));

        horizontalLayout->addWidget(intensityUp);

        intensityDown = new QPushButton(verticalLayoutWidget_3);
        intensityDown->setObjectName(QString::fromUtf8("intensityDown"));

        horizontalLayout->addWidget(intensityDown);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        intensityBar = new QProgressBar(verticalLayoutWidget_3);
        intensityBar->setObjectName(QString::fromUtf8("intensityBar"));
        intensityBar->setValue(24);

        horizontalLayout_5->addWidget(intensityBar);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 50, 254, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton_7 = new QRadioButton(horizontalLayoutWidget);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        horizontalLayout_3->addWidget(radioButton_7);

        radioButton_6 = new QRadioButton(horizontalLayoutWidget);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        horizontalLayout_3->addWidget(radioButton_6);

        radioButton_5 = new QRadioButton(horizontalLayoutWidget);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        horizontalLayout_3->addWidget(radioButton_5);

        radioButton_4 = new QRadioButton(horizontalLayoutWidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        horizontalLayout_3->addWidget(radioButton_4);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 109, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 129, 26));
        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 110, 259, 31));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(horizontalLayoutWidget_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_8->addWidget(radioButton);

        radioButton_2 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_8->addWidget(radioButton_2);

        horizontalLayoutWidget_3 = new QWidget(groupBox);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(30, 150, 261, 31));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        radioButton_3 = new QRadioButton(horizontalLayoutWidget_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout_9->addWidget(radioButton_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_8 = new QLabel(horizontalLayoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_10->addWidget(label_8);

        spinBox_2 = new QSpinBox(horizontalLayoutWidget_3);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        horizontalLayout_10->addWidget(spinBox_2);


        horizontalLayout_9->addLayout(horizontalLayout_10);

        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(30, 190, 110, 23));
        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(380, 50, 221, 101));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(verticalLayoutWidget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        powerOn = new QPushButton(verticalLayoutWidget_5);
        powerOn->setObjectName(QString::fromUtf8("powerOn"));

        horizontalLayout_2->addWidget(powerOn);

        powerOff = new QPushButton(verticalLayoutWidget_5);
        powerOff->setObjectName(QString::fromUtf8("powerOff"));

        horizontalLayout_2->addWidget(powerOff);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(verticalLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        batteryLevel = new QProgressBar(verticalLayoutWidget_5);
        batteryLevel->setObjectName(QString::fromUtf8("batteryLevel"));
        batteryLevel->setValue(24);

        horizontalLayout_4->addWidget(batteryLevel);


        verticalLayout_5->addLayout(horizontalLayout_4);

        endSession = new QPushButton(centralwidget);
        endSession->setObjectName(QString::fromUtf8("endSession"));
        endSession->setGeometry(QRect(380, 350, 151, 25));
        startSession = new QPushButton(centralwidget);
        startSession->setObjectName(QString::fromUtf8("startSession"));
        startSession->setGeometry(QRect(380, 320, 151, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_7->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "L", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "R", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Connection", nullptr));
        radioButton_9->setText(QApplication::translate("MainWindow", "Excellent", nullptr));
        radioButton_8->setText(QApplication::translate("MainWindow", "Okay", nullptr));
        radioButton_10->setText(QApplication::translate("MainWindow", "No Connection", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Session Options", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Intensity", nullptr));
        intensityUp->setText(QApplication::translate("MainWindow", "Up", nullptr));
        intensityDown->setText(QApplication::translate("MainWindow", "Down", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Intensity", nullptr));
        radioButton_7->setText(QApplication::translate("MainWindow", "ALPHA", nullptr));
        radioButton_6->setText(QApplication::translate("MainWindow", "THETA", nullptr));
        radioButton_5->setText(QApplication::translate("MainWindow", "DELTA", nullptr));
        radioButton_4->setText(QApplication::translate("MainWindow", "MET", nullptr));
        label->setText(QApplication::translate("MainWindow", "Type", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Time", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "20 minutes", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "45 minutes", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "Custom", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "minutes", nullptr));
        checkBox_3->setText(QApplication::translate("MainWindow", "Record Session", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Power", nullptr));
        powerOn->setText(QApplication::translate("MainWindow", "On", nullptr));
        powerOff->setText(QApplication::translate("MainWindow", "Off", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Battery   ", nullptr));
        endSession->setText(QApplication::translate("MainWindow", "End Session", nullptr));
        startSession->setText(QApplication::translate("MainWindow", "Start Session", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
