#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>
#include <QGraphicsDropShadowEffect>

namespace Ui {
class LoginWidget;
}

class LoginWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWidget(QWidget *parent = nullptr);
    ~LoginWidget();

public slots:
    void on_loginButton_clicked();

    void on_loginButton_pressed();
    void on_loginButton_released();
private:
    Ui::LoginWidget *ui;
    QGraphicsDropShadowEffect *m_effect;
};

#endif // LOGINWIDGET_H
