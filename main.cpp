#include <QGuiApplication>
#include <QmlEngine>
#include <QQmlComponent>

class Dialogo : public QObject
{
    Q_OBJECT

public slots:
    void calculaLineEdit(const QString );

signals:
    QString enviaAncho(QString);

};

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlEngine engine;
	QQmlComponent component(&engine, QUrl::fromLocalFile("dialogo.qml"));
	QObject *object = component.create();

    //Dialog w;
    //w.show();

    QObject *resultado = object->findChild<QObject*>("resultado");
	if (resultado)
    	resultado->setProperty("text", "hola");

    Dialogo miDialogo;
    QObject::connect(object, SIGNAL(qmlSignal(QString)),
                     &miDialogo, SLOT(calculaLineEdit(QString)));


    delete object;

    return app.exec();
}
