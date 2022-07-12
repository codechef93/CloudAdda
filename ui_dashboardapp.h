/********************************************************************************
** Form generated from reading UI file 'dashboardapp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARDAPP_H
#define UI_DASHBOARDAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DashboardApp
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *icon;
    QLabel *text;
    QPushButton *logoutButton;

    void setupUi(QWidget *DashboardApp)
    {
        if (DashboardApp->objectName().isEmpty())
            DashboardApp->setObjectName(QStringLiteral("DashboardApp"));
        DashboardApp->resize(697, 78);
        horizontalLayout = new QHBoxLayout(DashboardApp);
        horizontalLayout->setSpacing(12);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(15, 17, 20, 17);
        icon = new QLabel(DashboardApp);
        icon->setObjectName(QStringLiteral("icon"));
        icon->setMinimumSize(QSize(41, 41));
        icon->setMaximumSize(QSize(41, 41));
        icon->setPixmap(QPixmap(QString::fromUtf8(":/images/resources/images/dashboard/chrome_icon.png")));
        icon->setScaledContents(true);

        horizontalLayout->addWidget(icon);

        text = new QLabel(DashboardApp);
        text->setObjectName(QStringLiteral("text"));

        horizontalLayout->addWidget(text);

        logoutButton = new QPushButton(DashboardApp);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        logoutButton->setMinimumSize(QSize(42, 44));
        logoutButton->setMaximumSize(QSize(42, 44));
        logoutButton->setStyleSheet(QLatin1String("QPushButton:pressed {\n"
"    background-color: rgba(43, 54, 82, 0.5);\n"
"    border-radius: 6px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/resources/images/dashboard/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutButton->setIcon(icon1);
        logoutButton->setIconSize(QSize(30, 26));

        horizontalLayout->addWidget(logoutButton);


        retranslateUi(DashboardApp);

        QMetaObject::connectSlotsByName(DashboardApp);
    } // setupUi

    void retranslateUi(QWidget *DashboardApp)
    {
        DashboardApp->setWindowTitle(QApplication::translate("DashboardApp", "Form", Q_NULLPTR));
        icon->setText(QString());
        text->setText(QApplication::translate("DashboardApp", "Chrome", Q_NULLPTR));
        logoutButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DashboardApp: public Ui_DashboardApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARDAPP_H
