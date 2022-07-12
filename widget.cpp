#include "widget.h"
#include "ui_widget.h"

#include <QFontDatabase>
#include <QMouseEvent>
#include "global.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QFontDatabase::addApplicationFont(":/fonts/resources/font/Roboto-Regular.ttf");
    QFontDatabase::addApplicationFont(":/fonts/resources/font/Roboto-Black.ttf");
    QFontDatabase::addApplicationFont(":/fonts/resources/font/Roboto-Bold.ttf");
    QFontDatabase::addApplicationFont(":/fonts/resources/font/Roboto-Light.ttf");
    QFontDatabase::addApplicationFont(":/fonts/resources/font/Roboto-Medium.ttf");
    QFontDatabase::addApplicationFont(":/fonts/resources/font/Roboto-Thin.ttf");
    setStyleSheet(loadScss("main"));

    ui->stackedWidget->setCurrentIndex(0);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::loadDashboard()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    m_prevPos = event->globalPos();
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    move(event->globalPos() - m_prevPos + pos());
    m_prevPos = event->globalPos();
}
