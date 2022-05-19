#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>

using namespace std;

class Jugador{
    
    private:

        char  simbolo;
        string nombre;

    public:     

        Jugador();
        
        char getSimbolo();
        string getNombre();
        void setSimbolo(char simbolo);
        void setNombre(string nombre);
};

#endif;