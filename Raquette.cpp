#include "Raquette.h"


Raquette::Raquette(double y):d_position{Position(RESOLUTION_X /2,RESOLUTION_Y-20)}{}

Raquette::~Raquette(){
}

void Raquette::maj(int xPos){
	d_position.x( xPos);
	if (d_position.x() < LARGEUR_RAQUETTE / 2){
		d_position.x(LARGEUR_RAQUETTE / 2);
	}
	if (d_position.x() > RESOLUTION_X - LARGEUR_RAQUETTE / 2){
		d_position.x( RESOLUTION_X - LARGEUR_RAQUETTE / 2);
	}
}

void Raquette::afficher()const{
    double x1=d_position.x() - LARGEUR_RAQUETTE / 2;
    double y1= d_position.y() - 5;
    double x2=d_position.x() + LARGEUR_RAQUETTE / 2;
    double y2= d_position.y() + 5;
    rectangle(x1,y1,x2,y2);

}
Position Raquette::position()const{
    return d_position;
}

