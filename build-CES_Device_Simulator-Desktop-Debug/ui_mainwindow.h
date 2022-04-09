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
#include <QtWidgets/QFrame>
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
    QRadioButton *alphaOption;
    QRadioButton *thetaOption;
    QRadioButton *deltaOption;
    QRadioButton *metOption;
    QLabel *label;
    QLabel *label_2;
    QCheckBox *recordSession;
    QFrame *line;
    QFrame *line_2;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *startSession;
    QPushButton *endSession;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *twentyOption;
    QRadioButton *fortyFiveOption;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *customOption;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QSpinBox *minutesInput;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QPushButton *powerOn;
    QPushButton *powerOff;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QProgressBar *batteryLevel;
    QWidget *widget;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_11;
    QRadioButton *ExcellentConnection;
    QRadioButton *OkayConnection;
    QRadioButton *noConnection;
    QFrame *line_3;
    QLabel *label_12;
    QCheckBox *leftEarDisconnected;
    QCheckBox *rightEarDisconnected;
    QFrame *line_4;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_7;
    QLabel *leftEar;
    QLabel *rightEar;
    QLabel *shortPulse;
    QLabel *dutyCycle;
    QLabel *statusOutput;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(619, 483);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 290, 54, 17));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 331, 401));
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
        horizontalLayoutWidget->setGeometry(QRect(30, 50, 261, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        alphaOption = new QRadioButton(horizontalLayoutWidget);
        alphaOption->setObjectName(QString::fromUtf8("alphaOption"));

        horizontalLayout_3->addWidget(alphaOption);

        thetaOption = new QRadioButton(horizontalLayoutWidget);
        thetaOption->setObjectName(QString::fromUtf8("thetaOption"));

        horizontalLayout_3->addWidget(thetaOption);

        deltaOption = new QRadioButton(horizontalLayoutWidget);
        deltaOption->setObjectName(QString::fromUtf8("deltaOption"));

        horizontalLayout_3->addWidget(deltaOption);

        metOption = new QRadioButton(horizontalLayoutWidget);
        metOption->setObjectName(QString::fromUtf8("metOption"));

        horizontalLayout_3->addWidget(metOption);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 109, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 129, 26));
        recordSession = new QCheckBox(groupBox);
        recordSession->setObjectName(QString::fromUtf8("recordSession"));
        recordSession->setGeometry(QRect(30, 190, 110, 23));
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(30, 80, 261, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(30, 210, 261, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_4 = new QWidget(groupBox);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(30, 340, 261, 31));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        startSession = new QPushButton(horizontalLayoutWidget_4);
        startSession->setObjectName(QString::fromUtf8("startSession"));

        horizontalLayout_6->addWidget(startSession);

        endSession = new QPushButton(horizontalLayoutWidget_4);
        endSession->setObjectName(QString::fromUtf8("endSession"));

        horizontalLayout_6->addWidget(endSession);

        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 110, 261, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        twentyOption = new QRadioButton(verticalLayoutWidget);
        twentyOption->setObjectName(QString::fromUtf8("twentyOption"));

        horizontalLayout_8->addWidget(twentyOption);

        fortyFiveOption = new QRadioButton(verticalLayoutWidget);
        fortyFiveOption->setObjectName(QString::fromUtf8("fortyFiveOption"));

        horizontalLayout_8->addWidget(fortyFiveOption);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        customOption = new QRadioButton(verticalLayoutWidget);
        customOption->setObjectName(QString::fromUtf8("customOption"));

        horizontalLayout_10->addWidget(customOption);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);

        minutesInput = new QSpinBox(verticalLayoutWidget);
        minutesInput->setObjectName(QString::fromUtf8("minutesInput"));

        horizontalLayout_9->addWidget(minutesInput);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        verticalLayout->addLayout(horizontalLayout_10);

        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(370, 50, 221, 62));
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

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(370, 120, 219, 311));
        verticalLayout_7 = new QVBoxLayout(widget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_7->addWidget(label_11);

        ExcellentConnection = new QRadioButton(widget);
        ExcellentConnection->setObjectName(QString::fromUtf8("ExcellentConnection"));

        verticalLayout_7->addWidget(ExcellentConnection);

        OkayConnection = new QRadioButton(widget);
        OkayConnection->setObjectName(QString::fromUtf8("OkayConnection"));

        verticalLayout_7->addWidget(OkayConnection);

        noConnection = new QRadioButton(widget);
        noConnection->setObjectName(QString::fromUtf8("noConnection"));

        verticalLayout_7->addWidget(noConnection);

        line_3 = new QFrame(widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_3);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_7->addWidget(label_12);

        leftEarDisconnected = new QCheckBox(widget);
        leftEarDisconnected->setObjectName(QString::fromUtf8("leftEarDisconnected"));

        verticalLayout_7->addWidget(leftEarDisconnected);

        rightEarDisconnected = new QCheckBox(widget);
        rightEarDisconnected->setObjectName(QString::fromUtf8("rightEarDisconnected"));

        verticalLayout_7->addWidget(rightEarDisconnected);

        line_4 = new QFrame(widget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_4);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_7->addWidget(label_13);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        leftEar = new QLabel(widget);
        leftEar->setObjectName(QString::fromUtf8("leftEar"));
        leftEar->setAutoFillBackground(false);
        leftEar->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(leftEar);

        rightEar = new QLabel(widget);
        rightEar->setObjectName(QString::fromUtf8("rightEar"));
        rightEar->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(rightEar);

        shortPulse = new QLabel(widget);
        shortPulse->setObjectName(QString::fromUtf8("shortPulse"));

        horizontalLayout_7->addWidget(shortPulse);

        dutyCycle = new QLabel(widget);
        dutyCycle->setObjectName(QString::fromUtf8("dutyCycle"));

        horizontalLayout_7->addWidget(dutyCycle);


        verticalLayout_7->addLayout(horizontalLayout_7);

        statusOutput = new QLabel(widget);
        statusOutput->setObjectName(QString::fromUtf8("statusOutput"));

        verticalLayout_7->addWidget(statusOutput);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 619, 22));
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
        groupBox->setTitle(QApplication::translate("MainWindow", "Session", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Intensity", nullptr));
        intensityUp->setText(QApplication::translate("MainWindow", "Up", nullptr));
        intensityDown->setText(QApplication::translate("MainWindow", "Down", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Intensity", nullptr));
        alphaOption->setText(QApplication::translate("MainWindow", "ALPHA", nullptr));
        thetaOption->setText(QApplication::translate("MainWindow", "THETA", nullptr));
        deltaOption->setText(QApplication::translate("MainWindow", "DELTA", nullptr));
        metOption->setText(QApplication::translate("MainWindow", "MET", nullptr));
        label->setText(QApplication::translate("MainWindow", "Type", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Time", nullptr));
        recordSession->setText(QApplication::translate("MainWindow", "Record Session", nullptr));
        startSession->setText(QApplication::translate("MainWindow", "Start Session", nullptr));
        endSession->setText(QApplication::translate("MainWindow", "End Session", nullptr));
        twentyOption->setText(QApplication::translate("MainWindow", "20 minutes", nullptr));
        fortyFiveOption->setText(QApplication::translate("MainWindow", "45 minutes", nullptr));
        customOption->setText(QApplication::translate("MainWindow", "Custom", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "minutes", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Power", nullptr));
        powerOn->setText(QApplication::translate("MainWindow", "On", nullptr));
        powerOff->setText(QApplication::translate("MainWindow", "Off", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Battery   ", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Connection", nullptr));
        ExcellentConnection->setText(QApplication::translate("MainWindow", "Excellent", nullptr));
        OkayConnection->setText(QApplication::translate("MainWindow", "Okay", nullptr));
        noConnection->setText(QApplication::translate("MainWindow", "No Connection", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Ear Connection", nullptr));
        leftEarDisconnected->setText(QApplication::translate("MainWindow", "Left Ear Disconnected", nullptr));
        rightEarDisconnected->setText(QApplication::translate("MainWindow", "Right Ear Disconnected", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Status", nullptr));
        leftEar->setText(QApplication::translate("MainWindow", "L", nullptr));
        rightEar->setText(QApplication::translate("MainWindow", "R", nullptr));
        shortPulse->setText(QApplication::translate("MainWindow", "Short Pulse", nullptr));
        dutyCycle->setText(QApplication::translate("MainWindow", "Duty Cycle", nullptr));
        statusOutput->setText(QApplication::translate("MainWindow", "Output: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
