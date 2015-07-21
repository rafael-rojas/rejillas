
#include "rejilla.h"

rejilla::rejilla(int m){
    mCubico = m;
    anchura.resize(10);
}
rejilla::rejilla(){
    mCubico = 0;
    anchura.resize(10);
}
void rejilla::setM3( int m){
    mCubico = m;
}

int rejilla::getM3(){
    return mCubico;
}
void rejilla::setAnchura(int pos, int valor){
    anchura[pos] = valor;
}

int rejilla::getAnchura(int pos){
   return anchura[pos];
}

