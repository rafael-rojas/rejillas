
#include "resultado.h"
#include "tabla.h"
#include <QDebug>
#include <QVariant>


void CalculaResultado::calculaLineEdit(const QString altura, const QString caudal)
{
    qDebug() << altura;
    qDebug() << caudal;
    //qDebug() << "yeeeeeeeeeee";
    
    if ( caudal != "" ) {
        int caudalInt = caudal.toInt();

        QString alturaTexto = altura;
        qDebug() << "dentro";
        int alturaInt = alturaTexto.toInt();

        tabla tablaRejillas;
        tablaRejillas.inicializaTabla();

        int anchuraInt = tablaRejillas.encuentraAnchura(caudalInt, alturaInt);
        qDebug() << anchuraInt;
        
        QString resultado;
        
        if ( anchuraInt > 0 ) {
            QString anchuraTexto;
            anchuraTexto.setNum(anchuraInt);

            resultado = anchuraTexto+"x"+alturaTexto;
        }
        else 
            resultado = "Sin rejilla para ese caudal";
        
        emit enviaResultado(resultado);
    }
}
