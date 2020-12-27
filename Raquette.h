#ifndef RAQUETTE_H_INCLUDED
#define RAQUETTE_H_INCLUDED
#include<graphics.h>
#include "Position.h"

class Raquette{

public :
    Raquette(double y);
    ~Raquette();
    void maj(int xPos);
    void afficher()const;
    Position position()const;
private;
    Position d_position
    };



#endif // RAQUETTE_H_INCLUDED
