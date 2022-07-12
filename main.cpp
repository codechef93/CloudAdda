#include "widget.h"

#include <QApplication>
#include <QGraphicsDropShadowEffect>
#include "global.h"

Widget* g_MainWidget = 0;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    const int radius = 10;

    QPainterPath path;
    path.addRoundedRect(w.rect(), radius, radius);
    QRegion mask = QRegion(path.toFillPolygon().toPolygon());
    w.setMask(mask);

    g_MainWidget = &w;

    w.show();
    return a.exec();
}
