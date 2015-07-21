#ifndef TABLA_H
#define TABLA_H

#include "rejilla.h"

class tabla{
public:
    tabla();
    void inicializaTabla();
    int encuentraAnchura(int, int);

private:
    QVector<rejilla> cuadrante;
    int devuelvePos(int, int, int);
    int traduceAltura(int);
};

#endif // TABLA_H
