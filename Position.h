#ifndef POSITION_H_INCLUDED
#define POSITION_H_INCLUDED
#include<cmath>

class Position {
public:
    Position(double x, double y);
    Position(double xy);
    Position();
    virtual ~Position();
    double x()const;
    double y()const;
    void x(double x);
    void y(double y);
    void xy(double x, double y);
    double getDistance(const Position& p)const;
    double getDistance(int x, int y)const;

private :
    double d_x;
    double d_y;
};




#endif // POSITION_H_INCLUDED
