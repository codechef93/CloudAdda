#include "loginwidget.h"
#include "ui_loginwidget.h"

#include <QDebug>

#include "global.h"
#include "widget.h"

LoginWidget::LoginWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWidget)
{
    ui->setupUi(this);

    setStyleSheet(loadScss("login"));

    m_effect = new QGraphicsDropShadowEffect(this);
    m_effect->setColor(QColor(0, 0, 0, 255 * 0.2));
    m_effect->setXOffset(0);
    m_effect->setYOffset(4);
    m_effect->setBlurRadius(4);
    // hide shadow
    m_effect->setEnabled(false);
    ui->loginButton->setGraphicsEffect(m_effect);
}

LoginWidget::~LoginWidget()
{
    delete ui;
}

void LoginWidget::on_loginButton_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();
    bool remember = ui->remember->isChecked();

    qDebug() << "username: " << username;
    qDebug() << "password: " << password;
    qDebug() << "remember: " << remember;

    // add your code here for credentials
    g_MainWidget->loadDashboard();
}

void LoginWidget::on_loginButton_pressed()
{
    m_effect->setEnabled(true);
}

void LoginWidget::on_loginButton_released()
{
    m_effect->setEnabled(false);
}
