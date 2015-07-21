#ifndef REJILLA_H
#define REJILLA_H

#include <QVector>

class rejilla{
public:
    rejilla(int);
    rejilla();
    void setM3(int);
    int getM3();
    void setAnchura(int, int);
    int getAnchura(int);
private:
    int mCubico;
    QVector<int> anchura;
};

#endif // REJILLA_H
