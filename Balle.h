#ifndef BALLE_H_INCLUDED
#define BALLE_H_INCLUDED

#include"Position.h"
#include <ctime>
#include<graphics.h>
#include "Raquette.h"
#include"constVariables.h"

class Balle{
public :
    Balle();
    ~Balle();

    void avancer(double x);
    void colision(double x);
    bool estDehors();
    Position position()const;
    void position(const Position&);
	Position speed()const;
	void speed(const Position&);
	void afficher()const;
	inline int rayon()const{return d_rayon;}
private:
    Position d_position;
	Position d_speed;
    int d_rayon;

};

#endif // BALLE_H_INCLUDED
