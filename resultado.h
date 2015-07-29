 
#ifndef RESULTADO_H
#define RESULTADO_H

#include <QObject>
#include <QVariant>

class Resultado : public QObject
{
    Q_OBJECT


public slots:
    void calculaLineEdit(const QString, const QString );
    
signals:
    void enviaAncho(QVariant);
};

#endif // RESULTADO_H
