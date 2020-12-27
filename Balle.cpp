#include "Balle.h"
Balle::Balle():
    d_position{},
    d_speed{200,-300},
    d_rayon{RAYON_BALLE}
{
    srand(time(nullptr));
	d_position=Position((double)rand() / (RAND_MAX + 1) * RESOLUTION_X,RESOLUTION_Y - 100);
}

Balle::~Balle()
{

}

void Balle::avancer(double tempsMS){
	d_position.x(d_position.x()+d_speed.x()*tempsMS);
	d_position.y(d_position.y()+d_speed.y()*tempsMS);

	if (d_position.x() > RESOLUTION_X - d_rayon)
		d_speed.x( -abs(d_speed.x()));
	if (d_position.x() < 10)
		d_speed.x( abs(d_speed.x()));
	if (d_position.y() < 10)
		d_speed.y( abs(d_speed.y()));
    if(d_position.y() > RESOLUTION_Y ){
        d_position.y(d_position.y()-20);
        d_speed.xy(0,0);
    }

}

void Balle::colision(double RaquetteX){
	if (d_position.y() > RESOLUTION_Y - 20 && d_speed.y() > 0){
		if (d_position.x() > RaquetteX - LARGEUR_RAQUETTE / 2 && d_position.x() < RaquetteX + LARGEUR_RAQUETTE/2 ){
			d_speed.y( -d_speed.y());
		}
	}
}

bool Balle::estDehors(){
	return d_position.y() > RESOLUTION_Y;
}
void Balle::afficher()const{
	setcolor(LIGHTCYAN);
	circle(d_position.x(),d_position.y(),d_rayon);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
	floodfill(d_position.x(),d_position.y(),LIGHTCYAN);
}
Position Balle::position()const{
    return d_position;
}
void Balle::position(const Position& p){
    d_position=p;
}
Position Balle::speed()const{
    return d_speed;
}
void Balle::speed(const Position& p){
    d_speed=p;
}
