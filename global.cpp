
#include "global.h"
#include <QFile>

QString loadScss(QString filename)
{
    QFile file(QString(":/scss/resources/scss/") + filename + ".scss");
    file.open(QIODevice::ReadOnly);
    QString scss = file.readAll();
    file.close();

    return scss;
}
