#ifndef DASHBOARDAPP_H
#define DASHBOARDAPP_H

#include <QWidget>

namespace Ui {
class DashboardApp;
}

class DashboardApp : public QWidget
{
    Q_OBJECT

public:
    explicit DashboardApp(QWidget *parent = nullptr);
    ~DashboardApp();

    void setDashboardApp(QString icon, QString text);
private:
    Ui::DashboardApp *ui;
};

#endif // DASHBOARDAPP_H
