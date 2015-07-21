#include "tabla.h"
#include <QDebug>

tabla::tabla(){
    cuadrante.resize(22);
}

void tabla::inicializaTabla(){

    cuadrante[0].setM3(110);

    cuadrante[0].setAnchura(0, 150);
    cuadrante[0].setAnchura(1, 150);
    cuadrante[0].setAnchura(2, 0);
    cuadrante[0].setAnchura(3, 0);
    cuadrante[0].setAnchura(4, 0);
    cuadrante[0].setAnchura(5, 0);
    cuadrante[0].setAnchura(6, 0);
    cuadrante[0].setAnchura(7, 0);
    cuadrante[0].setAnchura(8, 0);
    cuadrante[0].setAnchura(9, 0);

    cuadrante[1].setM3(135);

    cuadrante[1].setAnchura(0, 200);
    cuadrante[1].setAnchura(1, 150);
    cuadrante[1].setAnchura(2, 0);
    cuadrante[1].setAnchura(3, 0);
    cuadrante[1].setAnchura(4, 0);
    cuadrante[1].setAnchura(5, 0);
    cuadrante[1].setAnchura(6, 0);
    cuadrante[1].setAnchura(7, 0);
    cuadrante[1].setAnchura(8, 0);
    cuadrante[1].setAnchura(9, 0);

    cuadrante[2].setM3(210);

    cuadrante[2].setAnchura(0, 250);
    cuadrante[2].setAnchura(1, 150);
    cuadrante[2].setAnchura(2, 0);
    cuadrante[2].setAnchura(3, 0);
    cuadrante[2].setAnchura(4, 0);
    cuadrante[2].setAnchura(5, 0);
    cuadrante[2].setAnchura(6, 0);
    cuadrante[2].setAnchura(7, 0);
    cuadrante[2].setAnchura(8, 0);
    cuadrante[2].setAnchura(9, 0);

    cuadrante[3].setM3(295);

    cuadrante[3].setAnchura(0, 300);
    cuadrante[3].setAnchura(1, 200);
    cuadrante[3].setAnchura(2, 0);
    cuadrante[3].setAnchura(3, 0);
    cuadrante[3].setAnchura(4, 0);
    cuadrante[3].setAnchura(5, 0);
    cuadrante[3].setAnchura(6, 0);
    cuadrante[3].setAnchura(7, 0);
    cuadrante[3].setAnchura(8, 0);
    cuadrante[3].setAnchura(9, 0);

    cuadrante[4].setM3(340);

    cuadrante[4].setAnchura(0, 350);
    cuadrante[4].setAnchura(1, 250);
    cuadrante[4].setAnchura(2, 200);
    cuadrante[4].setAnchura(3, 0);
    cuadrante[4].setAnchura(4, 0);
    cuadrante[4].setAnchura(5, 0);
    cuadrante[4].setAnchura(6, 0);
    cuadrante[4].setAnchura(7, 0);
    cuadrante[4].setAnchura(8, 0);
    cuadrante[4].setAnchura(9, 0);

    cuadrante[5].setM3(425);

    cuadrante[5].setAnchura(0, 450);
    cuadrante[5].setAnchura(1, 300);
    cuadrante[5].setAnchura(2, 200);
    cuadrante[5].setAnchura(3, 0);
    cuadrante[5].setAnchura(4, 0);
    cuadrante[5].setAnchura(5, 0);
    cuadrante[5].setAnchura(6, 0);
    cuadrante[5].setAnchura(7, 0);
    cuadrante[5].setAnchura(8, 0);
    cuadrante[5].setAnchura(9, 0);

    cuadrante[6].setM3(470);

    cuadrante[6].setAnchura(0, 500);
    cuadrante[6].setAnchura(1, 350);
    cuadrante[6].setAnchura(2, 250);
    cuadrante[6].setAnchura(3, 0);
    cuadrante[6].setAnchura(4, 0);
    cuadrante[6].setAnchura(5, 0);
    cuadrante[6].setAnchura(6, 0);
    cuadrante[6].setAnchura(7, 0);
    cuadrante[6].setAnchura(8, 0);
    cuadrante[6].setAnchura(9, 0);

    cuadrante[7].setM3(595);

    cuadrante[7].setAnchura(0, 600);
    cuadrante[7].setAnchura(1, 400);
    cuadrante[7].setAnchura(2, 300);
    cuadrante[7].setAnchura(3, 250);
    cuadrante[7].setAnchura(4, 0);
    cuadrante[7].setAnchura(5, 0);
    cuadrante[7].setAnchura(6, 0);
    cuadrante[7].setAnchura(7, 0);
    cuadrante[7].setAnchura(8, 0);
    cuadrante[7].setAnchura(9, 0);

    cuadrante[8].setM3(810);

    cuadrante[8].setAnchura(0, 750);
    cuadrante[8].setAnchura(1, 500);
    cuadrante[8].setAnchura(2, 350);
    cuadrante[8].setAnchura(3, 300);
    cuadrante[8].setAnchura(4, 0);
    cuadrante[8].setAnchura(5, 0);
    cuadrante[8].setAnchura(6, 0);
    cuadrante[8].setAnchura(7, 0);
    cuadrante[8].setAnchura(8, 0);
    cuadrante[8].setAnchura(9, 0);

    cuadrante[21].setM3(935);

    cuadrante[21].setAnchura(0, 950);
    cuadrante[21].setAnchura(1, 600);
    cuadrante[21].setAnchura(2, 450);
    cuadrante[21].setAnchura(3, 350);
    cuadrante[21].setAnchura(4, 300);
    cuadrante[21].setAnchura(5, 0);
    cuadrante[21].setAnchura(6, 0);
    cuadrante[21].setAnchura(7, 0);
    cuadrante[21].setAnchura(8, 0);
    cuadrante[21].setAnchura(9, 0);

    cuadrante[9].setM3(1100);

    cuadrante[9].setAnchura(0, 0);
    cuadrante[9].setAnchura(1, 650);
    cuadrante[9].setAnchura(2, 500);
    cuadrante[9].setAnchura(3, 400);
    cuadrante[9].setAnchura(4, 350);
    cuadrante[9].setAnchura(5, 0);
    cuadrante[9].setAnchura(6, 0);
    cuadrante[9].setAnchura(7, 0);
    cuadrante[9].setAnchura(8, 0);
    cuadrante[9].setAnchura(9, 0);

    cuadrante[10].setM3(1225);

    cuadrante[10].setAnchura(0, 0);
    cuadrante[10].setAnchura(1, 750);
    cuadrante[10].setAnchura(2, 600);
    cuadrante[10].setAnchura(3, 450);
    cuadrante[10].setAnchura(4, 400);
    cuadrante[10].setAnchura(5, 350);
    cuadrante[10].setAnchura(6, 0);
    cuadrante[10].setAnchura(7, 0);
    cuadrante[10].setAnchura(8, 0);
    cuadrante[10].setAnchura(9, 0);

    cuadrante[11].setM3(1360);

    cuadrante[11].setAnchura(0, 0);
    cuadrante[11].setAnchura(1, 900);
    cuadrante[11].setAnchura(2, 650);
    cuadrante[11].setAnchura(3, 550);
    cuadrante[11].setAnchura(4, 450);
    cuadrante[11].setAnchura(5, 400);
    cuadrante[11].setAnchura(6, 0);
    cuadrante[11].setAnchura(7, 0);
    cuadrante[11].setAnchura(8, 0);
    cuadrante[11].setAnchura(9, 0);


    cuadrante[12].setM3(1615);

    cuadrante[12].setAnchura(0, 0);
    cuadrante[12].setAnchura(1, 0);
    cuadrante[12].setAnchura(2, 750);
    cuadrante[12].setAnchura(3, 600);
    cuadrante[12].setAnchura(4, 500);
    cuadrante[12].setAnchura(5, 450);
    cuadrante[12].setAnchura(6, 400);
    cuadrante[12].setAnchura(7, 0);
    cuadrante[12].setAnchura(8, 0);
    cuadrante[12].setAnchura(9, 0);

    cuadrante[13].setM3(1910);

    cuadrante[13].setAnchura(0, 0);
    cuadrante[13].setAnchura(1, 0);
    cuadrante[13].setAnchura(2, 950);
    cuadrante[13].setAnchura(3, 750);
    cuadrante[13].setAnchura(4, 600);
    cuadrante[13].setAnchura(5, 550);
    cuadrante[13].setAnchura(6, 450);
    cuadrante[13].setAnchura(7, 0);
    cuadrante[13].setAnchura(8, 0);
    cuadrante[13].setAnchura(9, 0);

    cuadrante[14].setM3(2170);

    cuadrante[14].setAnchura(0, 0);
    cuadrante[14].setAnchura(1, 0);
    cuadrante[14].setAnchura(2, 0);
    cuadrante[14].setAnchura(3, 800);
    cuadrante[14].setAnchura(4, 700);
    cuadrante[14].setAnchura(5, 600);
    cuadrante[14].setAnchura(6, 500);
    cuadrante[14].setAnchura(7, 450);
    cuadrante[14].setAnchura(8, 0);
    cuadrante[14].setAnchura(9, 0);

    cuadrante[15].setM3(2470);

    cuadrante[15].setAnchura(0, 0);
    cuadrante[15].setAnchura(1, 0);
    cuadrante[15].setAnchura(2, 0);
    cuadrante[15].setAnchura(3, 900);
    cuadrante[15].setAnchura(4, 750);
    cuadrante[15].setAnchura(5, 650);
    cuadrante[15].setAnchura(6, 600);
    cuadrante[15].setAnchura(7, 550);
    cuadrante[15].setAnchura(8, 500);
    cuadrante[15].setAnchura(9, 0);

    cuadrante[16].setM3(2720);

    cuadrante[16].setAnchura(0, 0);
    cuadrante[16].setAnchura(1, 0);
    cuadrante[16].setAnchura(2, 0);
    cuadrante[16].setAnchura(3, 0);
    cuadrante[16].setAnchura(4, 900);
    cuadrante[16].setAnchura(5, 750);
    cuadrante[16].setAnchura(6, 650);
    cuadrante[16].setAnchura(7, 600);
    cuadrante[16].setAnchura(8, 550);
    cuadrante[16].setAnchura(9, 0);

    cuadrante[17].setM3(3400);

    cuadrante[17].setAnchura(0, 0);
    cuadrante[17].setAnchura(1, 0);
    cuadrante[17].setAnchura(2, 0);
    cuadrante[17].setAnchura(3, 0);
    cuadrante[17].setAnchura(4, 0);
    cuadrante[17].setAnchura(5, 950);
    cuadrante[17].setAnchura(6, 850);
    cuadrante[17].setAnchura(7, 750);
    cuadrante[17].setAnchura(8, 700);
    cuadrante[17].setAnchura(9, 600);

    cuadrante[18].setM3(4080);

    cuadrante[18].setAnchura(0, 0);
    cuadrante[18].setAnchura(1, 0);
    cuadrante[18].setAnchura(2, 0);
    cuadrante[18].setAnchura(3, 0);
    cuadrante[18].setAnchura(4, 0);
    cuadrante[18].setAnchura(5, 0);
    cuadrante[18].setAnchura(6, 0);
    cuadrante[18].setAnchura(7, 900);
    cuadrante[18].setAnchura(8, 850);
    cuadrante[18].setAnchura(9, 700);

    cuadrante[19].setM3(4775);

    cuadrante[19].setAnchura(0, 0);
    cuadrante[19].setAnchura(1, 0);
    cuadrante[19].setAnchura(2, 0);
    cuadrante[19].setAnchura(3, 0);
    cuadrante[19].setAnchura(4, 0);
    cuadrante[19].setAnchura(5, 0);
    cuadrante[19].setAnchura(6, 0);
    cuadrante[19].setAnchura(7, 0);
    cuadrante[19].setAnchura(8, 900);
    cuadrante[19].setAnchura(9, 750);

    cuadrante[20].setM3(5450);

    cuadrante[20].setAnchura(0, 0);
    cuadrante[20].setAnchura(1, 0);
    cuadrante[20].setAnchura(2, 0);
    cuadrante[20].setAnchura(3, 0);
    cuadrante[20].setAnchura(4, 0);
    cuadrante[20].setAnchura(5, 0);
    cuadrante[20].setAnchura(6, 0);
    cuadrante[20].setAnchura(7, 0);
    cuadrante[20].setAnchura(8, 0);
    cuadrante[20].setAnchura(9, 900);
}

int tabla::traduceAltura(int alturaMm){
    if(alturaMm == 100)
        return 0;
    if(alturaMm == 150)
        return 1;
    if(alturaMm == 200)
        return 2;
    if(alturaMm == 250)
        return 3;
    if(alturaMm == 300)
        return 4;
    if(alturaMm == 350)
        return 5;
    if(alturaMm == 400)
        return 6;
    if(alturaMm == 450)
        return 7;
    if(alturaMm == 500)
        return 8;
    if(alturaMm == 600)
        return 9;
    return 0;
}

int tabla::devuelvePos(int posInicial, int altura, int metros){

    int posAnt = posInicial - 1;
    if(posInicial == 21)
        posAnt = 8;
    int dif1 = cuadrante[posInicial].getM3() - metros;
    int dif2 = metros - cuadrante[posAnt].getM3();

    if (dif1 < dif2)
        return cuadrante[posInicial].getAnchura(altura);
    if (dif2 < dif1)
        return cuadrante[posAnt].getAnchura(altura);

    return cuadrante[posInicial].getAnchura(altura);
}

int tabla::encuentraAnchura(int metros, int alturaMm){

    int altura = traduceAltura(alturaMm);

    if (metros <= 110 )
        return cuadrante[0].getAnchura(altura);

    if (metros > 110 && metros < 135)
        return devuelvePos(1, altura, metros);
    if (metros == 135)
        return cuadrante[1].getAnchura(altura);

    if (metros > 135 && metros < 210)
        return devuelvePos(2, altura, metros);
    if (metros == 210)
        return cuadrante[2].getAnchura(altura);

    if (metros > 210 && metros < 295)
        return devuelvePos(3, altura, metros);
    if (metros == 295)
        return cuadrante[3].getAnchura(altura);

    if (metros > 295 && metros < 340)
        return devuelvePos(4, altura, metros);
    if (metros == 340)
        return cuadrante[4].getAnchura(altura);

    if (metros > 340 && metros < 425)
        return devuelvePos(5, altura, metros);
    if (metros == 425)
        return cuadrante[5].getAnchura(altura);

    if (metros > 425 && metros < 470)
        return devuelvePos(6, altura, metros);
    if (metros == 470)
        return cuadrante[6].getAnchura(altura);

    if (metros > 470 && metros < 595)
        return devuelvePos(7, altura, metros);
    if (metros == 595)
        return cuadrante[7].getAnchura(altura);

    if (metros > 595 && metros < 810)
        return devuelvePos(8, altura, metros);
    if (metros == 810)
        return cuadrante[8].getAnchura(altura);

    if (metros > 810 && metros < 935)
        return devuelvePos(21, altura, metros);
    if (metros == 935)
        return cuadrante[21].getAnchura(altura);

    if (metros > 935 && metros < 1100)
        return devuelvePos(9, altura, metros);
    if (metros == 1100)
        return cuadrante[9].getAnchura(altura);

    if (metros > 1100 && metros < 1225)
        return devuelvePos(10, altura, metros);
    if (metros == 1225)
        return cuadrante[10].getAnchura(altura);

    if (metros > 1225 && metros < 1360)
        return devuelvePos(11, altura, metros);
    if (metros == 1360)
        return cuadrante[11].getAnchura(altura);

    if (metros > 1360 && metros < 1615)
        return devuelvePos(12, altura, metros);
    if (metros == 1615)
        return cuadrante[12].getAnchura(altura);

    if (metros > 1615 && metros < 1910)
        return devuelvePos(13, altura, metros);
    if (metros == 1910)
        return cuadrante[13].getAnchura(altura);

    if (metros > 1910 && metros < 2170)
        return devuelvePos(14, altura, metros);
    if (metros == 2170)
        return cuadrante[14].getAnchura(altura);

    if (metros > 2170 && metros < 2470)
        return devuelvePos(15, altura, metros);
    if (metros == 2470)
        return cuadrante[15].getAnchura(altura);

    if (metros > 2470 && metros < 2720)
        return devuelvePos(16, altura, metros);
    if (metros == 2720)
        return cuadrante[16].getAnchura(altura);

    if (metros > 2720 && metros < 3400)
        return devuelvePos(17, altura, metros);
    if (metros == 3400)
        return cuadrante[17].getAnchura(altura);

    if (metros > 3400 && metros < 4080)
        return devuelvePos(18, altura, metros);
    if (metros == 4080)
        return cuadrante[18].getAnchura(altura);

    if (metros > 4080 && metros < 4775)
        return devuelvePos(19, altura, metros);
    if (metros == 4775)
        return cuadrante[19].getAnchura(altura);

    if (metros > 4775 && metros < 5450)
        return devuelvePos(20, altura, metros);
    if (metros == 5450)
        return cuadrante[20].getAnchura(altura);

    return 0;
}

