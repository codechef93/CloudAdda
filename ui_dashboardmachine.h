/********************************************************************************
** Form generated from reading UI file 'dashboardmachine.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARDMACHINE_H
#define UI_DASHBOARDMACHINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DashboardMachine
{
public:
    QLabel *icon;
    QLabel *text;
    QFrame *line;
    QLabel *running;
    QLabel *stopped;
    QWidget *buttonWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *powerOnButton;
    QPushButton *powerOffButton;
    QSpacerItem *hSpacer2;
    QPushButton *shutDownButton;
    QSpacerItem *hSpacer1;
    QPushButton *consoleButton;

    void setupUi(QWidget *DashboardMachine)
    {
        if (DashboardMachine->objectName().isEmpty())
            DashboardMachine->setObjectName(QStringLiteral("DashboardMachine"));
        DashboardMachine->resize(527, 120);
        icon = new QLabel(DashboardMachine);
        icon->setObjectName(QStringLiteral("icon"));
        icon->setGeometry(QRect(12, 25, 40, 40));
        icon->setPixmap(QPixmap(QString::fromUtf8(":/images/resources/images/dashboard/windows_icon.png")));
        icon->setScaledContents(true);
        text = new QLabel(DashboardMachine);
        text->setObjectName(QStringLiteral("text"));
        text->setGeometry(QRect(65, 36, 451, 16));
        line = new QFrame(DashboardMachine);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(17, 90, 461, 1));
        line->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0.1);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        running = new QLabel(DashboardMachine);
        running->setObjectName(QStringLiteral("running"));
        running->setGeometry(QRect(90, 0, 56, 16));
        running->setStyleSheet(QLatin1String("color: rgba(27, 241, 138, 1);\n"
"font: 10px 'Roboto';"));
        stopped = new QLabel(DashboardMachine);
        stopped->setObjectName(QStringLiteral("stopped"));
        stopped->setGeometry(QRect(20, 0, 56, 16));
        stopped->setStyleSheet(QLatin1String("color: rgba(255, 105, 105, 1);\n"
"font: 10px 'Roboto';"));
        buttonWidget = new QWidget(DashboardMachine);
        buttonWidget->setObjectName(QStringLiteral("buttonWidget"));
        buttonWidget->setGeometry(QRect(20, 79, 491, 51));
        horizontalLayout = new QHBoxLayout(buttonWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 8, 6, 8);
        powerOnButton = new QPushButton(buttonWidget);
        powerOnButton->setObjectName(QStringLiteral("powerOnButton"));
        powerOnButton->setMinimumSize(QSize(100, 30));
        powerOnButton->setMaximumSize(QSize(100, 30));
        powerOnButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: rgba(115, 126, 162, 1);\n"
"	font: 10px 'Roboto';\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(40, 50, 75, 0.5);\n"
"    border-radius: 6px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/resources/images/dashboard/power_on.png"), QSize(), QIcon::Normal, QIcon::Off);
        powerOnButton->setIcon(icon1);
        powerOnButton->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(powerOnButton);

        powerOffButton = new QPushButton(buttonWidget);
        powerOffButton->setObjectName(QStringLiteral("powerOffButton"));
        powerOffButton->setMinimumSize(QSize(100, 30));
        powerOffButton->setMaximumSize(QSize(100, 30));
        powerOffButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: rgba(115, 126, 162, 1);\n"
"	font: 10px 'Roboto';\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(40, 50, 75, 0.5);\n"
"    border-radius: 6px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/resources/images/dashboard/power_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        powerOffButton->setIcon(icon2);
        powerOffButton->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(powerOffButton);

        hSpacer2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(hSpacer2);

        shutDownButton = new QPushButton(buttonWidget);
        shutDownButton->setObjectName(QStringLiteral("shutDownButton"));
        shutDownButton->setMinimumSize(QSize(100, 30));
        shutDownButton->setMaximumSize(QSize(100, 30));
        shutDownButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: rgba(115, 126, 162, 1);\n"
"	font: 10px 'Roboto';\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(40, 50, 75, 0.5);\n"
"    border-radius: 6px;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/resources/images/dashboard/shutdown.png"), QSize(), QIcon::Normal, QIcon::Off);
        shutDownButton->setIcon(icon3);
        shutDownButton->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(shutDownButton);

        hSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(hSpacer1);

        consoleButton = new QPushButton(buttonWidget);
        consoleButton->setObjectName(QStringLiteral("consoleButton"));
        consoleButton->setMinimumSize(QSize(100, 30));
        consoleButton->setMaximumSize(QSize(100, 30));
        consoleButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: rgba(115, 126, 162, 1);\n"
"	font: 10px 'Roboto';\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(40, 50, 75, 0.5);\n"
"    border-radius: 6px;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/resources/images/dashboard/console.png"), QSize(), QIcon::Normal, QIcon::Off);
        consoleButton->setIcon(icon4);
        consoleButton->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(consoleButton);


        retranslateUi(DashboardMachine);

        QMetaObject::connectSlotsByName(DashboardMachine);
    } // setupUi

    void retranslateUi(QWidget *DashboardMachine)
    {
        DashboardMachine->setWindowTitle(QApplication::translate("DashboardMachine", "Form", Q_NULLPTR));
        icon->setText(QString());
        text->setText(QApplication::translate("DashboardMachine", "gits.cloudadda", Q_NULLPTR));
        running->setText(QApplication::translate("DashboardMachine", "Running", Q_NULLPTR));
        stopped->setText(QApplication::translate("DashboardMachine", "Stopped", Q_NULLPTR));
        powerOnButton->setText(QApplication::translate("DashboardMachine", "POWER ON", Q_NULLPTR));
        powerOffButton->setText(QApplication::translate("DashboardMachine", "POWER OFF", Q_NULLPTR));
        shutDownButton->setText(QApplication::translate("DashboardMachine", "SHUT DOWN", Q_NULLPTR));
        consoleButton->setText(QApplication::translate("DashboardMachine", "CONSOLE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DashboardMachine: public Ui_DashboardMachine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARDMACHINE_H
