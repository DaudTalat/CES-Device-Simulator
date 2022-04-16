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
    QPushButton *btnIntensityUp;
    QPushButton *btnIntensityDown;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QProgressBar *barIntensity;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *gpType;
    QRadioButton *rbAlphaOption;
    QRadioButton *rbThetaOption;
    QRadioButton *rbDeltaOption;
    QRadioButton *rbMetOption;
    QLabel *label;
    QLabel *label_2;
    QCheckBox *ckRecordSession;
    QFrame *line;
    QFrame *line_2;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnStartSession;
    QPushButton *btnEndSession;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *gbTime;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *rbTwentyOption;
    QRadioButton *rbFortyFiveOption;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *rbCustomOption;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QSpinBox *spnMinutesInput;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QPushButton *btnPowerOn;
    QPushButton *btnPowerOff;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QProgressBar *barBatteryLevel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_11;
    QRadioButton *rbExcellentConnection;
    QRadioButton *rbOkayConnection;
    QFrame *line_3;
    QLabel *label_12;
    QCheckBox *ckLeftEarDisconnected;
    QCheckBox *ckRightEarDisconnected;
    QFrame *line_4;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbLeftEar;
    QLabel *lbRightEar;
    QLabel *lbShortPulse;
    QLabel *lbDutyCycle;
    QLabel *lbStatusOutput;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(619, 533);
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

        btnIntensityUp = new QPushButton(verticalLayoutWidget_3);
        btnIntensityUp->setObjectName(QString::fromUtf8("btnIntensityUp"));
        btnIntensityUp->setEnabled(false);

        horizontalLayout->addWidget(btnIntensityUp);

        btnIntensityDown = new QPushButton(verticalLayoutWidget_3);
        btnIntensityDown->setObjectName(QString::fromUtf8("btnIntensityDown"));
        btnIntensityDown->setEnabled(false);

        horizontalLayout->addWidget(btnIntensityDown);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        barIntensity = new QProgressBar(verticalLayoutWidget_3);
        barIntensity->setObjectName(QString::fromUtf8("barIntensity"));
        barIntensity->setMinimum(0);
        barIntensity->setMaximum(8);
        barIntensity->setValue(1);

        horizontalLayout_5->addWidget(barIntensity);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 50, 261, 31));
        gpType = new QHBoxLayout(horizontalLayoutWidget);
        gpType->setObjectName(QString::fromUtf8("gpType"));
        gpType->setContentsMargins(0, 0, 0, 0);
        rbAlphaOption = new QRadioButton(horizontalLayoutWidget);
        rbAlphaOption->setObjectName(QString::fromUtf8("rbAlphaOption"));
        rbAlphaOption->setEnabled(false);
        rbAlphaOption->setChecked(true);

        gpType->addWidget(rbAlphaOption);

        rbThetaOption = new QRadioButton(horizontalLayoutWidget);
        rbThetaOption->setObjectName(QString::fromUtf8("rbThetaOption"));
        rbThetaOption->setEnabled(false);
        rbThetaOption->setChecked(false);

        gpType->addWidget(rbThetaOption);

        rbDeltaOption = new QRadioButton(horizontalLayoutWidget);
        rbDeltaOption->setObjectName(QString::fromUtf8("rbDeltaOption"));
        rbDeltaOption->setEnabled(false);
        rbDeltaOption->setChecked(false);
        rbDeltaOption->setAutoExclusive(true);

        gpType->addWidget(rbDeltaOption);

        rbMetOption = new QRadioButton(horizontalLayoutWidget);
        rbMetOption->setObjectName(QString::fromUtf8("rbMetOption"));
        rbMetOption->setEnabled(false);

        gpType->addWidget(rbMetOption);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 109, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 129, 26));
        ckRecordSession = new QCheckBox(groupBox);
        ckRecordSession->setObjectName(QString::fromUtf8("ckRecordSession"));
        ckRecordSession->setEnabled(false);
        ckRecordSession->setGeometry(QRect(30, 190, 110, 23));
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
        btnStartSession = new QPushButton(horizontalLayoutWidget_4);
        btnStartSession->setObjectName(QString::fromUtf8("btnStartSession"));
        btnStartSession->setEnabled(false);

        horizontalLayout_6->addWidget(btnStartSession);

        btnEndSession = new QPushButton(horizontalLayoutWidget_4);
        btnEndSession->setObjectName(QString::fromUtf8("btnEndSession"));
        btnEndSession->setEnabled(false);

        horizontalLayout_6->addWidget(btnEndSession);

        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 110, 261, 80));
        gbTime = new QVBoxLayout(verticalLayoutWidget);
        gbTime->setObjectName(QString::fromUtf8("gbTime"));
        gbTime->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        rbTwentyOption = new QRadioButton(verticalLayoutWidget);
        rbTwentyOption->setObjectName(QString::fromUtf8("rbTwentyOption"));
        rbTwentyOption->setEnabled(false);
        rbTwentyOption->setChecked(true);

        horizontalLayout_8->addWidget(rbTwentyOption);

        rbFortyFiveOption = new QRadioButton(verticalLayoutWidget);
        rbFortyFiveOption->setObjectName(QString::fromUtf8("rbFortyFiveOption"));
        rbFortyFiveOption->setEnabled(false);

        horizontalLayout_8->addWidget(rbFortyFiveOption);


        gbTime->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        rbCustomOption = new QRadioButton(verticalLayoutWidget);
        rbCustomOption->setObjectName(QString::fromUtf8("rbCustomOption"));
        rbCustomOption->setEnabled(false);

        horizontalLayout_10->addWidget(rbCustomOption);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);

        spnMinutesInput = new QSpinBox(verticalLayoutWidget);
        spnMinutesInput->setObjectName(QString::fromUtf8("spnMinutesInput"));
        spnMinutesInput->setEnabled(false);
        spnMinutesInput->setMinimum(1);

        horizontalLayout_9->addWidget(spnMinutesInput);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        gbTime->addLayout(horizontalLayout_10);

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

        btnPowerOn = new QPushButton(verticalLayoutWidget_5);
        btnPowerOn->setObjectName(QString::fromUtf8("btnPowerOn"));
        btnPowerOn->setEnabled(true);

        horizontalLayout_2->addWidget(btnPowerOn);

        btnPowerOff = new QPushButton(verticalLayoutWidget_5);
        btnPowerOff->setObjectName(QString::fromUtf8("btnPowerOff"));
        btnPowerOff->setEnabled(false);

        horizontalLayout_2->addWidget(btnPowerOff);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(verticalLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        barBatteryLevel = new QProgressBar(verticalLayoutWidget_5);
        barBatteryLevel->setObjectName(QString::fromUtf8("barBatteryLevel"));
        barBatteryLevel->setValue(100);

        horizontalLayout_4->addWidget(barBatteryLevel);


        verticalLayout_5->addLayout(horizontalLayout_4);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(370, 120, 219, 311));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_7->addWidget(label_11);

        rbExcellentConnection = new QRadioButton(layoutWidget);
        rbExcellentConnection->setObjectName(QString::fromUtf8("rbExcellentConnection"));
        rbExcellentConnection->setEnabled(false);
        rbExcellentConnection->setChecked(true);

        verticalLayout_7->addWidget(rbExcellentConnection);

        rbOkayConnection = new QRadioButton(layoutWidget);
        rbOkayConnection->setObjectName(QString::fromUtf8("rbOkayConnection"));
        rbOkayConnection->setEnabled(false);

        verticalLayout_7->addWidget(rbOkayConnection);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_3);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_7->addWidget(label_12);

        ckLeftEarDisconnected = new QCheckBox(layoutWidget);
        ckLeftEarDisconnected->setObjectName(QString::fromUtf8("ckLeftEarDisconnected"));
        ckLeftEarDisconnected->setEnabled(false);

        verticalLayout_7->addWidget(ckLeftEarDisconnected);

        ckRightEarDisconnected = new QCheckBox(layoutWidget);
        ckRightEarDisconnected->setObjectName(QString::fromUtf8("ckRightEarDisconnected"));
        ckRightEarDisconnected->setEnabled(false);

        verticalLayout_7->addWidget(ckRightEarDisconnected);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_4);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_7->addWidget(label_13);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lbLeftEar = new QLabel(layoutWidget);
        lbLeftEar->setObjectName(QString::fromUtf8("lbLeftEar"));
        lbLeftEar->setAutoFillBackground(false);
        lbLeftEar->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lbLeftEar);

        lbRightEar = new QLabel(layoutWidget);
        lbRightEar->setObjectName(QString::fromUtf8("lbRightEar"));
        lbRightEar->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lbRightEar);

        lbShortPulse = new QLabel(layoutWidget);
        lbShortPulse->setObjectName(QString::fromUtf8("lbShortPulse"));

        horizontalLayout_7->addWidget(lbShortPulse);

        lbDutyCycle = new QLabel(layoutWidget);
        lbDutyCycle->setObjectName(QString::fromUtf8("lbDutyCycle"));

        horizontalLayout_7->addWidget(lbDutyCycle);


        verticalLayout_7->addLayout(horizontalLayout_7);

        lbStatusOutput = new QLabel(centralwidget);
        lbStatusOutput->setObjectName(QString::fromUtf8("lbStatusOutput"));
        lbStatusOutput->setGeometry(QRect(20, 440, 571, 39));
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
        btnIntensityUp->setText(QApplication::translate("MainWindow", "Up", nullptr));
        btnIntensityDown->setText(QApplication::translate("MainWindow", "Down", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Intensity", nullptr));
        barIntensity->setFormat(QApplication::translate("MainWindow", "%v", nullptr));
        rbAlphaOption->setText(QApplication::translate("MainWindow", "ALPHA", nullptr));
        rbThetaOption->setText(QApplication::translate("MainWindow", "THETA", nullptr));
        rbDeltaOption->setText(QApplication::translate("MainWindow", "DELTA", nullptr));
        rbMetOption->setText(QApplication::translate("MainWindow", "MET", nullptr));
        label->setText(QApplication::translate("MainWindow", "Type", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Time", nullptr));
        ckRecordSession->setText(QApplication::translate("MainWindow", "Record Session", nullptr));
        btnStartSession->setText(QApplication::translate("MainWindow", "Start Session", nullptr));
        btnEndSession->setText(QApplication::translate("MainWindow", "End Session", nullptr));
        rbTwentyOption->setText(QApplication::translate("MainWindow", "20 minutes", nullptr));
        rbFortyFiveOption->setText(QApplication::translate("MainWindow", "45 minutes", nullptr));
        rbCustomOption->setText(QApplication::translate("MainWindow", "Custom", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "minutes", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Power", nullptr));
        btnPowerOn->setText(QApplication::translate("MainWindow", "On", nullptr));
        btnPowerOff->setText(QApplication::translate("MainWindow", "Off", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Battery   ", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Connection", nullptr));
        rbExcellentConnection->setText(QApplication::translate("MainWindow", "Excellent", nullptr));
        rbOkayConnection->setText(QApplication::translate("MainWindow", "Okay", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Ear Connection", nullptr));
        ckLeftEarDisconnected->setText(QApplication::translate("MainWindow", "Left Ear Disconnected", nullptr));
        ckRightEarDisconnected->setText(QApplication::translate("MainWindow", "Right Ear Disconnected", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Status", nullptr));
        lbLeftEar->setText(QApplication::translate("MainWindow", "L", nullptr));
        lbRightEar->setText(QApplication::translate("MainWindow", "R", nullptr));
        lbShortPulse->setText(QApplication::translate("MainWindow", "Short Pulse", nullptr));
        lbDutyCycle->setText(QApplication::translate("MainWindow", "Duty Cycle", nullptr));
        lbStatusOutput->setText(QApplication::translate("MainWindow", "Output: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
