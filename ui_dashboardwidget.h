/********************************************************************************
** Form generated from reading UI file 'dashboardwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARDWIDGET_H
#define UI_DASHBOARDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "dashboardapp.h"
#include "dashboardapp2.h"
#include "dashboardmachine.h"

QT_BEGIN_NAMESPACE

class Ui_DashboardWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *topBar;
    QPushButton *menuButton;
    QLabel *dashboard;
    QSpacerItem *hSpacer1;
    QLabel *logo;
    QLabel *minimize;
    QLabel *exit;
    QWidget *yourApps;
    QLabel *label_1;
    QWidget *gradientLine_1;
    QLineEdit *searchBar;
    DashboardApp *app1;
    DashboardApp *app2;
    DashboardApp2 *app3;
    QWidget *yourMachines;
    QLabel *label_2;
    QWidget *gradientLine_2;
    DashboardMachine *machine1;
    DashboardMachine *machine2;
    DashboardMachine *machine3;
    QSpacerItem *vSpacer1;

    void setupUi(QWidget *DashboardWidget)
    {
        if (DashboardWidget->objectName().isEmpty())
            DashboardWidget->setObjectName(QStringLiteral("DashboardWidget"));
        DashboardWidget->resize(400, 945);
        verticalLayout = new QVBoxLayout(DashboardWidget);
        verticalLayout->setSpacing(14);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(25, 25, 25, 25);
        topBar = new QHBoxLayout();
        topBar->setSpacing(15);
        topBar->setObjectName(QStringLiteral("topBar"));
        menuButton = new QPushButton(DashboardWidget);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/resources/images/dashboard/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuButton->setIcon(icon);
        menuButton->setIconSize(QSize(16, 13));

        topBar->addWidget(menuButton);

        dashboard = new QLabel(DashboardWidget);
        dashboard->setObjectName(QStringLiteral("dashboard"));

        topBar->addWidget(dashboard);

        hSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        topBar->addItem(hSpacer1);

        logo = new QLabel(DashboardWidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/resources/images/dashboard/logo.png")));

        topBar->addWidget(logo);

        minimize = new QLabel(DashboardWidget);
        minimize->setObjectName(QStringLiteral("minimize"));
        minimize->setPixmap(QPixmap(QString::fromUtf8(":/images/resources/images/dashboard/minimize.png")));

        topBar->addWidget(minimize);

        exit = new QLabel(DashboardWidget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setPixmap(QPixmap(QString::fromUtf8(":/images/resources/images/dashboard/exit.png")));

        topBar->addWidget(exit);


        verticalLayout->addLayout(topBar);

        yourApps = new QWidget(DashboardWidget);
        yourApps->setObjectName(QStringLiteral("yourApps"));
        yourApps->setMinimumSize(QSize(0, 30));
        yourApps->setMaximumSize(QSize(16777215, 30));
        label_1 = new QLabel(yourApps);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(0, 0, 91, 26));
        label_1->setStyleSheet(QLatin1String("font: 16px 'Roboto';\n"
""));
        gradientLine_1 = new QWidget(yourApps);
        gradientLine_1->setObjectName(QStringLiteral("gradientLine_1"));
        gradientLine_1->setGeometry(QRect(3, 27, 50, 3));
        gradientLine_1->setStyleSheet(QLatin1String(".QWidget {\n"
"	background-color: qlineargradient(x1:0 y1:0, x2:1 y2:0, stop:1 rgba(44, 95, 255, 1), stop:0 rgba(196, 148, 234, 1));\n"
"}"));

        verticalLayout->addWidget(yourApps);

        searchBar = new QLineEdit(DashboardWidget);
        searchBar->setObjectName(QStringLiteral("searchBar"));
        searchBar->setMinimumSize(QSize(0, 36));
        searchBar->setMaximumSize(QSize(16777215, 36));

        verticalLayout->addWidget(searchBar);

        app1 = new DashboardApp(DashboardWidget);
        app1->setObjectName(QStringLiteral("app1"));
        app1->setMinimumSize(QSize(0, 74));
        app1->setMaximumSize(QSize(16777215, 74));

        verticalLayout->addWidget(app1);

        app2 = new DashboardApp(DashboardWidget);
        app2->setObjectName(QStringLiteral("app2"));
        app2->setMinimumSize(QSize(0, 74));
        app2->setMaximumSize(QSize(16777215, 74));

        verticalLayout->addWidget(app2);

        app3 = new DashboardApp2(DashboardWidget);
        app3->setObjectName(QStringLiteral("app3"));
        app3->setMinimumSize(QSize(0, 120));
        app3->setMaximumSize(QSize(16777215, 120));

        verticalLayout->addWidget(app3);

        yourMachines = new QWidget(DashboardWidget);
        yourMachines->setObjectName(QStringLiteral("yourMachines"));
        yourMachines->setMinimumSize(QSize(0, 30));
        yourMachines->setMaximumSize(QSize(16777215, 30));
        label_2 = new QLabel(yourMachines);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 161, 26));
        label_2->setStyleSheet(QLatin1String("font: 16px 'Roboto';\n"
""));
        gradientLine_2 = new QWidget(yourMachines);
        gradientLine_2->setObjectName(QStringLiteral("gradientLine_2"));
        gradientLine_2->setGeometry(QRect(3, 27, 50, 3));
        gradientLine_2->setStyleSheet(QLatin1String(".QWidget {\n"
"	background-color: qlineargradient(x1:0 y1:0, x2:1 y2:0, stop:1 rgba(44, 95, 255, 1), stop:0 rgba(196, 148, 234, 1));\n"
"}"));

        verticalLayout->addWidget(yourMachines);

        machine1 = new DashboardMachine(DashboardWidget);
        machine1->setObjectName(QStringLiteral("machine1"));
        machine1->setMinimumSize(QSize(0, 120));
        machine1->setMaximumSize(QSize(16777215, 120));

        verticalLayout->addWidget(machine1);

        machine2 = new DashboardMachine(DashboardWidget);
        machine2->setObjectName(QStringLiteral("machine2"));
        machine2->setMinimumSize(QSize(0, 120));
        machine2->setMaximumSize(QSize(16777215, 120));

        verticalLayout->addWidget(machine2);

        machine3 = new DashboardMachine(DashboardWidget);
        machine3->setObjectName(QStringLiteral("machine3"));
        machine3->setMinimumSize(QSize(0, 120));
        machine3->setMaximumSize(QSize(16777215, 120));

        verticalLayout->addWidget(machine3);

        vSpacer1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(vSpacer1);


        retranslateUi(DashboardWidget);

        QMetaObject::connectSlotsByName(DashboardWidget);
    } // setupUi

    void retranslateUi(QWidget *DashboardWidget)
    {
        DashboardWidget->setWindowTitle(QApplication::translate("DashboardWidget", "Form", Q_NULLPTR));
        menuButton->setText(QString());
        dashboard->setText(QApplication::translate("DashboardWidget", "Dashboard", Q_NULLPTR));
        logo->setText(QString());
        minimize->setText(QString());
        exit->setText(QString());
        label_1->setText(QApplication::translate("DashboardWidget", "Your Apps", Q_NULLPTR));
        searchBar->setText(QString());
        searchBar->setPlaceholderText(QApplication::translate("DashboardWidget", "Server App Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("DashboardWidget", "Your Machines", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DashboardWidget: public Ui_DashboardWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARDWIDGET_H
