#include <QGuiApplication>
#include <QQmlEngine>
#include <QQmlComponent>

#include "tabla.h"

class Dialogo : public QObject
{
    Q_OBJECT

public slots:
    void calculaLineEdit(const QString );

signals:
    QString enviaAncho(QString);

};

void Dialogo::calculaLineEdit(const QString texto){

    int entero = texto.toInt();

    //QString alturaTexto = alturaCombo->currentText();

    //int entero2 = alturaTexto.toInt();

    tabla tablaRejillas;
    tablaRejillas.inicializaTabla();

    int anchura = tablaRejillas.encuentraAnchura(entero, entero2);

    QString res;
    res.setNum(anchura);

    QString resultado = res+"x";//+alturaTexto;

    emit enviaAncho(resultado);

    //return res;

}

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlEngine engine;
	QQmlComponent component(&engine, QUrl::fromLocalFile("dialogo.qml"));
	QObject *object = component.create();

    //Dialog w;
    //w.show();

    /* ejemplo de modificacion de campo en qml
    QObject *resultado = object->findChild<QObject*>("resultado");
    if (resultado)
    	resultado->setProperty("text", "hola");
    */
    
    Dialogo miDialogo;
    //QObject::connect(object, SIGNAL(qmlSignal(QString)), &miDialogo, SLOT(calculaLineEdit(QString)));


    

    return app.exec();delete object;
}
