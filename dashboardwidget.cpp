#include "dashboardwidget.h"
#include "ui_dashboardwidget.h"

#include <QDebug>

#include "global.h"
#include "widget.h"

DashboardWidget::DashboardWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DashboardWidget)
{
    ui->setupUi(this);

    setStyleSheet(loadScss("dashboard"));

    ui->app1->setDashboardApp(":/images/resources/images/dashboard/chrome_icon.png", "Chrome");
    ui->app2->setDashboardApp(":/images/resources/images/dashboard/excel_icon.png", "Excel");
    ui->app3->setDashboardApp(":/images/resources/images/dashboard/notepad_icon.png", "Notepad");

    ui->app3->setRunning(true);

    ui->machine1->setDashboardMachine(":/images/resources/images/dashboard/windows_icon.png", "gits.cloudadda");
    ui->machine2->setDashboardMachine(":/images/resources/images/dashboard/redhat_icon.png", "testofmywebsite.mydomainname.com");
    ui->machine3->setDashboardMachine(":/images/resources/images/dashboard/centos_icon.png", "testofmywebsite.mydomainname.com");

    ui->machine1->setRunning(true);
    ui->machine2->setRunning(false);
    ui->machine3->setRunning(false);
}

DashboardWidget::~DashboardWidget()
{
    delete ui;
}
