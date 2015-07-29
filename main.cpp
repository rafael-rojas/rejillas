#include <QGuiApplication>
#include <QQmlEngine>
#include <QQmlComponent>
#include <QVariant>

#include "tabla.h"
#include "resultado.h"



int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlEngine engine;
    
    QQmlComponent component(&engine, QUrl::fromLocalFile("dialogo.qml"));
    
    QObject *object = component.create();

    

    /* ejemplo de modificacion de campo en qml
    QObject *resultado = object->findChild<QObject*>("resultado");
    if (resultado)
    	resultado->setProperty("text", "hola");
    */
    
    CalculaResultado miResultado;

    QObject::connect(object, SIGNAL(qmlSignal(QString, QString)), &miResultado, SLOT(calculaLineEdit(QString, QString)));
    
    QObject::connect(&miResultado, SIGNAL(enviaResultado(QVariant)), object, SLOT(muestraResultado(QVariant)));
    

    return app.exec();//delete object;
}
