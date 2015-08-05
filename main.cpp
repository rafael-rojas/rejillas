#include <QGuiApplication>
#include <KAboutData>
#include <KLocalizedString> //para los i18n
#include <KDeclarative/KDeclarative>
#include <QVariant>

#include "tabla.h"
#include "resultado.h"

/*
/ https://community.kde.org/Frameworks/Porting_Notes
/ https://techbase.kde.org/Development/Tutorials/First_program
/ http://notmart.org/blog/2015/03/writing-qml-based-apps-the-kde-way/
*/

int main(int argc, char *argv[])
{
    KAboutData aboutData(
                         // The program name used internally.
                         "rejillas",
                         // A displayable program name string.
                         i18n("Calcula rejillas"),
                         // The program version string.
                         "1.0",
                         // Short description of what the app does.
                         i18n("Calcula la rejilla adecuada según caudal"),
                         KAboutLicense::GPL_V3,
                         i18n("(c) 2015"),
                         // Optional text shown in the About box.
                         // Can contain any information desired.
                         i18n("Versión para plasma"),
                         // The program homepage string.
                         "http://example.com/",
                         // The bug report email address
                         "submit@bugs.kde.org");
    
    QGuiApplication app(argc, argv); //KApplication es reemplazado por QApplication
    
    //KCmdLineArgs pasa a QCmdLineParser
    // antes KCmdLineArgs::init( argc, argv, &aboutData );
    //QCmdLineParser debe configurarse despues de QApplication al contraio que KCmdLineArgs
    QCmdLineParser::init( argc, argv, &aboutData );
    
    
    KDeclarative::QmlObject *qmlObj = new KDeclarative::KDeclarative::QmlObject;

    QQmlEngine engine;
    
    //añade cosas al engine
    KDeclarative::KDeclarative decl;
    decl.setupBindings(engine);
    
    QQmlComponent component(&engine, QUrl::fromLocalFile("dialogo.qml"));
    
    QObject *object = qmlObj.createObjectFromComponent(component);

    

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
