#include "Position.h"

Position::Position(double x,double y):
    d_x{x},
    d_y{y}
{
}
Position::Position(double xy):
    Position{xy,xy}
{
}

Position::Position():
    Position{0.0,0.0}
{
}

void Position::x(double val){
    d_x=val;
}

void Position::y(double val){
    d_y=val;
}

void Position::xy(double x,double y){
    d_x=x;
    d_y=y;
}
double Position::x()const{return d_x;}
double Position::y()const{return d_y;}

double Position::getDistance(const Position& p)const{
    return sqrt(
                ((d_x-p.x())*(d_x-p.x()))
                            +
                ((d_y-p.y())*(d_y-p.y()))
            );
}

double Position::getDistance(int x,int y)const{
    double xx=d_x-x;
    double yy= d_y-y;
    double distance= sqrt(xx*xx + yy*yy);
    return distance;
}
Position::~Position()
{}
