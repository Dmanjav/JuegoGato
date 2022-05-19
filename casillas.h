#ifndef CASILLSA_H
#define CASILLAS_H

using namespace std;

class Casillas
{
private:

    char simbolo;
    int posicion;
    
public:
    Casillas();
    
    char getSimbolo();
    int getPosicion();
    void setSimbolo(char simbolo);
    void setPosicion(int posicion);
    bool ocupada();
};

#endif
