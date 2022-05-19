#ifndef TABLERO_H
#define TABLERO_H
#include "casillas.h"

using namespace std;

class Tablero
{
private:

    Casillas casillas;

public:

    Tablero();
    
    bool lleno();
    bool ganador();
    void reset();
    void setCasillas(char simbolo, int posicion);
};

#endif