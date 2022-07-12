#include "dashboardapp.h"
#include "ui_dashboardapp.h"

DashboardApp::DashboardApp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DashboardApp)
{
    ui->setupUi(this);

    setAttribute(Qt::WA_StyledBackground, true);
}

DashboardApp::~DashboardApp()
{
    delete ui;
}

void DashboardApp::setDashboardApp(QString icon, QString text)
{
    ui->icon->setPixmap(icon);
    ui->text->setText(text);
}
