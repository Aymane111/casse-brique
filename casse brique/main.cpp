#include <iostream>
#include "graphics.h"
#include "mur.h"
#include "constVariables.h"
using namespace std;

int main()
{
    opengraphsize(800,600);
    mur (0,0,RESOLUTION_X,40,10); //mur haut
    mur (0,40,40,RESOLUTION_Y,10); //mur gauche
    mur (RESOLUTION_X-40,40,RESOLUTION_X,RESOLUTION_Y,10); // mur à droite
    getch();
    closegraph();
}

