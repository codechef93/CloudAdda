/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "dashboardwidget.h"
#include "loginwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    LoginWidget *login;
    DashboardWidget *dashboard;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(414, 896);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        login = new LoginWidget();
        login->setObjectName(QStringLiteral("login"));
        stackedWidget->addWidget(login);
        dashboard = new DashboardWidget();
        dashboard->setObjectName(QStringLiteral("dashboard"));
        stackedWidget->addWidget(dashboard);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "CloudAdda", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
