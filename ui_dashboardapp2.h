/********************************************************************************
** Form generated from reading UI file 'dashboardapp2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARDAPP2_H
#define UI_DASHBOARDAPP2_H

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

class Ui_DashboardApp2
{
public:
    QLabel *running;
    QWidget *buttonWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *launchButton;
    QSpacerItem *hSpacer2;
    QPushButton *maximizeButton;
    QSpacerItem *hSpacer1;
    QPushButton *logoutButton;
    QLabel *stopped;
    QFrame *line;
    QLabel *text;
    QLabel *icon;

    void setupUi(QWidget *DashboardApp2)
    {
        if (DashboardApp2->objectName().isEmpty())
            DashboardApp2->setObjectName(QStringLiteral("DashboardApp2"));
        DashboardApp2->resize(527, 120);
        running = new QLabel(DashboardApp2);
        running->setObjectName(QStringLiteral("running"));
        running->setGeometry(QRect(78, 0, 56, 16));
        running->setStyleSheet(QLatin1String("color: rgba(27, 241, 138, 1);\n"
"font: 10px 'Roboto';"));
        buttonWidget = new QWidget(DashboardApp2);
        buttonWidget->setObjectName(QStringLiteral("buttonWidget"));
        buttonWidget->setGeometry(QRect(8, 79, 491, 51));
        horizontalLayout = new QHBoxLayout(buttonWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 8, 6, 8);
        launchButton = new QPushButton(buttonWidget);
        launchButton->setObjectName(QStringLiteral("launchButton"));
        launchButton->setMinimumSize(QSize(100, 30));
        launchButton->setMaximumSize(QSize(100, 30));
        launchButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: rgba(115, 126, 162, 1);\n"
"	font: 10px 'Roboto';\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(40, 50, 75, 0.5);\n"
"    border-radius: 6px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/resources/images/dashboard/launch.png"), QSize(), QIcon::Normal, QIcon::Off);
        launchButton->setIcon(icon1);
        launchButton->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(launchButton);

        hSpacer2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(hSpacer2);

        maximizeButton = new QPushButton(buttonWidget);
        maximizeButton->setObjectName(QStringLiteral("maximizeButton"));
        maximizeButton->setMinimumSize(QSize(100, 30));
        maximizeButton->setMaximumSize(QSize(100, 30));
        maximizeButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: rgba(115, 126, 162, 1);\n"
"	font: 10px 'Roboto';\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(40, 50, 75, 0.5);\n"
"    border-radius: 6px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/resources/images/dashboard/maximize.png"), QSize(), QIcon::Normal, QIcon::Off);
        maximizeButton->setIcon(icon2);
        maximizeButton->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(maximizeButton);

        hSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(hSpacer1);

        logoutButton = new QPushButton(buttonWidget);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        logoutButton->setMinimumSize(QSize(100, 30));
        logoutButton->setMaximumSize(QSize(100, 30));
        logoutButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: rgba(115, 126, 162, 1);\n"
"	font: 10px 'Roboto';\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(40, 50, 75, 0.5);\n"
"    border-radius: 6px;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/resources/images/dashboard/log-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutButton->setIcon(icon3);
        logoutButton->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(logoutButton);

        stopped = new QLabel(DashboardApp2);
        stopped->setObjectName(QStringLiteral("stopped"));
        stopped->setGeometry(QRect(8, 0, 56, 16));
        stopped->setStyleSheet(QLatin1String("color: rgba(255, 105, 105, 1);\n"
"font: 10px 'Roboto';"));
        line = new QFrame(DashboardApp2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(5, 90, 461, 1));
        line->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0.1);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        text = new QLabel(DashboardApp2);
        text->setObjectName(QStringLiteral("text"));
        text->setGeometry(QRect(65, 36, 451, 16));
        icon = new QLabel(DashboardApp2);
        icon->setObjectName(QStringLiteral("icon"));
        icon->setGeometry(QRect(12, 25, 40, 40));
        icon->setPixmap(QPixmap(QString::fromUtf8(":/images/resources/images/dashboard/windows_icon.png")));
        icon->setScaledContents(true);

        retranslateUi(DashboardApp2);

        QMetaObject::connectSlotsByName(DashboardApp2);
    } // setupUi

    void retranslateUi(QWidget *DashboardApp2)
    {
        DashboardApp2->setWindowTitle(QApplication::translate("DashboardApp2", "Form", Q_NULLPTR));
        running->setText(QApplication::translate("DashboardApp2", "Running", Q_NULLPTR));
        launchButton->setText(QApplication::translate("DashboardApp2", "LAUNCH", Q_NULLPTR));
        maximizeButton->setText(QApplication::translate("DashboardApp2", "MAXIMIZE", Q_NULLPTR));
        logoutButton->setText(QApplication::translate("DashboardApp2", "LOGOUT", Q_NULLPTR));
        stopped->setText(QApplication::translate("DashboardApp2", "Stopped", Q_NULLPTR));
        text->setText(QApplication::translate("DashboardApp2", "gits.cloudadda", Q_NULLPTR));
        icon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DashboardApp2: public Ui_DashboardApp2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARDAPP2_H
