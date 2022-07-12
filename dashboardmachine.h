#ifndef DASHBOARDMACHINE_H
#define DASHBOARDMACHINE_H

#include <QWidget>

namespace Ui {
class DashboardMachine;
}

class DashboardMachine : public QWidget
{
    Q_OBJECT

public:
    explicit DashboardMachine(QWidget *parent = nullptr);
    ~DashboardMachine();

    void setDashboardMachine(QString icon, QString text);
    void setRunning(bool running);
protected:
    void resizeEvent(QResizeEvent *event);
private:
    Ui::DashboardMachine *ui;
};

#endif // DASHBOARDMACHINE_H
