#ifndef JUEGO_H
#define JUEGO_H

#include <jugador.h>
#include <tablero.h>

using namespace std;

class Juego{

    private: 

        Jugador player;
        Tablero tablero;

    public:

        Juego();

        void start();
};

#endif 