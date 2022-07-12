/********************************************************************************
** Form generated from reading UI file 'loginwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *logo;
    QSpacerItem *vSpacer2;
    QHBoxLayout *hLayout1;
    QWidget *loginForm;
    QLabel *label_18_1;
    QLabel *label_18_2;
    QPushButton *loginButton;
    QCheckBox *remember;
    QLineEdit *username;
    QLineEdit *password;
    QSpacerItem *vSpacer1;
    QLabel *homepage;
    QHBoxLayout *vLayout1;
    QSpacerItem *lSpacer;
    QLabel *TermsAndCondition;
    QLabel *line;
    QLabel *PrivacyPolicy;
    QSpacerItem *rSpacer;

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName(QStringLiteral("LoginWidget"));
        LoginWidget->resize(414, 896);
        LoginWidget->setAutoFillBackground(false);
        LoginWidget->setStyleSheet(QLatin1String("QWidget#LoginWidget {\n"
"	background-color: rgb(43, 54, 82);\n"
"}"));
        verticalLayout = new QVBoxLayout(LoginWidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 10, 0, 20);
        logo = new QLabel(LoginWidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/resources/images/login/logo.png")));
        logo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(logo);

        vSpacer2 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(vSpacer2);

        hLayout1 = new QHBoxLayout();
        hLayout1->setSpacing(0);
        hLayout1->setObjectName(QStringLiteral("hLayout1"));
        hLayout1->setContentsMargins(-1, -1, -1, 0);
        loginForm = new QWidget(LoginWidget);
        loginForm->setObjectName(QStringLiteral("loginForm"));
        loginForm->setMinimumSize(QSize(380, 242));
        loginForm->setMaximumSize(QSize(380, 242));
        loginForm->setStyleSheet(QLatin1String(".QWidget {\n"
"	background-image: url(:/images/resources/images/login/loginform.png);\n"
"	background-position: center center;\n"
"	background-repeat: no-repeat;\n"
"}"));
        label_18_1 = new QLabel(loginForm);
        label_18_1->setObjectName(QStringLiteral("label_18_1"));
        label_18_1->setGeometry(QRect(32, 48, 101, 41));
        label_18_1->setStyleSheet(QLatin1String("color: rgba(255, 255, 255, 1);\n"
"font: 18px 'Roboto';"));
        label_18_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_18_2 = new QLabel(loginForm);
        label_18_2->setObjectName(QStringLiteral("label_18_2"));
        label_18_2->setGeometry(QRect(32, 90, 101, 41));
        label_18_2->setStyleSheet(QLatin1String("color: rgba(255, 255, 255, 1);\n"
"font: 18px 'Roboto';"));
        label_18_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        loginButton = new QPushButton(loginForm);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(32, 140, 110, 36));
        loginButton->setStyleSheet(QLatin1String("QPushButton:pressed {\n"
"	background-color: qlineargradient(x1:1 y1:0, x2:0 y2:0, stop:1 rgba(69, 96, 239, 1), stop:0 rgba(209, 140, 237, 1));\n"
"	border: 0px solid;\n"
"}"));
        remember = new QCheckBox(loginForm);
        remember->setObjectName(QStringLiteral("remember"));
        remember->setGeometry(QRect(235, 150, 91, 20));
        username = new QLineEdit(loginForm);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(148, 48, 180, 22));
        password = new QLineEdit(loginForm);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(148, 90, 180, 22));
        password->setEchoMode(QLineEdit::Password);

        hLayout1->addWidget(loginForm);


        verticalLayout->addLayout(hLayout1);

        vSpacer1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(vSpacer1);

        homepage = new QLabel(LoginWidget);
        homepage->setObjectName(QStringLiteral("homepage"));
        homepage->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(homepage);

        vLayout1 = new QHBoxLayout();
        vLayout1->setSpacing(10);
        vLayout1->setObjectName(QStringLiteral("vLayout1"));
        vLayout1->setContentsMargins(-1, -1, -1, 0);
        lSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        vLayout1->addItem(lSpacer);

        TermsAndCondition = new QLabel(LoginWidget);
        TermsAndCondition->setObjectName(QStringLiteral("TermsAndCondition"));

        vLayout1->addWidget(TermsAndCondition);

        line = new QLabel(LoginWidget);
        line->setObjectName(QStringLiteral("line"));

        vLayout1->addWidget(line);

        PrivacyPolicy = new QLabel(LoginWidget);
        PrivacyPolicy->setObjectName(QStringLiteral("PrivacyPolicy"));

        vLayout1->addWidget(PrivacyPolicy);

        rSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        vLayout1->addItem(rSpacer);


        verticalLayout->addLayout(vLayout1);


        retranslateUi(LoginWidget);

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QApplication::translate("LoginWidget", "Form", Q_NULLPTR));
        logo->setText(QString());
        label_18_1->setText(QApplication::translate("LoginWidget", "User Name:", Q_NULLPTR));
        label_18_2->setText(QApplication::translate("LoginWidget", "Password:", Q_NULLPTR));
        loginButton->setText(QApplication::translate("LoginWidget", "Log In", Q_NULLPTR));
        remember->setText(QApplication::translate("LoginWidget", "Remember", Q_NULLPTR));
        homepage->setText(QApplication::translate("LoginWidget", "CLOUDADDA.COM", Q_NULLPTR));
        TermsAndCondition->setText(QApplication::translate("LoginWidget", "Terms & Conditions", Q_NULLPTR));
        line->setText(QApplication::translate("LoginWidget", "|", Q_NULLPTR));
        PrivacyPolicy->setText(QApplication::translate("LoginWidget", "Privacy Policy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
