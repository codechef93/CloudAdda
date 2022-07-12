#include "dashboardapp2.h"
#include "ui_dashboardapp2.h"
#include <QResizeEvent>

DashboardApp2::DashboardApp2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DashboardApp2)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_StyledBackground, true);
}

DashboardApp2::~DashboardApp2()
{
    delete ui;
}

void DashboardApp2::setDashboardApp(QString icon, QString text)
{
    ui->icon->setPixmap(icon);
    ui->text->setText(text);
}

void DashboardApp2::setRunning(bool running)
{
    ui->running->setVisible(running == true);
    ui->stopped->setVisible(running == false);
}

void DashboardApp2::resizeEvent(QResizeEvent *event)
{
    int width = event->size().width();
    int height = event->size().height();

    ui->running->move(width - 55, 10);
    ui->stopped->move(width - 55, 10);
    ui->line->setGeometry(2, 74, width - 4, 1);
    ui->buttonWidget->setGeometry(12, 75, width - 24, height - 75);
}
