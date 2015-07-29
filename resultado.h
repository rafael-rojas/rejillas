 
#ifndef RESULTADO_H
#define RESULTADO_H

#include <QObject>
#include <QVariant>

class CalculaResultado : public QObject
{
    Q_OBJECT


public slots:
    void calculaLineEdit(const QString, const QString );
    
signals:
    void enviaResultado(QVariant);
};

#endif // RESULTADO_H
