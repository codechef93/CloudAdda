#ifndef DASHBOARDAPP2_H
#define DASHBOARDAPP2_H

#include <QWidget>

namespace Ui {
class DashboardApp2;
}

class DashboardApp2 : public QWidget
{
    Q_OBJECT

public:
    explicit DashboardApp2(QWidget *parent = nullptr);
    ~DashboardApp2();

    void setDashboardApp(QString icon, QString text);
    void setRunning(bool running);
protected:
    void resizeEvent(QResizeEvent *event);

private:
    Ui::DashboardApp2 *ui;
};

#endif // DASHBOARDAPP2_H
