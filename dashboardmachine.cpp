#include "dashboardmachine.h"
#include "ui_dashboardmachine.h"

#include <QResizeEvent>

DashboardMachine::DashboardMachine(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DashboardMachine)
{
    ui->setupUi(this);

    setAttribute(Qt::WA_StyledBackground, true);
}

DashboardMachine::~DashboardMachine()
{
    delete ui;
}

void DashboardMachine::setDashboardMachine(QString icon, QString text)
{
    ui->icon->setPixmap(icon);
    ui->text->setText(text);
}

void DashboardMachine::setRunning(bool running)
{
    ui->running->setVisible(running == true);
    ui->stopped->setVisible(running == false);

    ui->powerOffButton->setVisible(running == true);
    ui->shutDownButton->setVisible(running == true);
    ui->powerOnButton->setVisible(running == false);
}

void DashboardMachine::resizeEvent(QResizeEvent *event)
{
    int width = event->size().width();
    int height = event->size().height();

    ui->running->move(width - 55, 10);
    ui->stopped->move(width - 55, 10);
    ui->line->setGeometry(2, 74, width - 4, 1);
    ui->buttonWidget->setGeometry(12, 75, width - 24, height - 75);
}
