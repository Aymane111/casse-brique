#include <iostream>
#include "graphics.h"
#include "constvar.h"

using namespace std;

int main()
{
     opengraphsize(RESOLUTION_X,RESOLUTION_Y);
     setcolor (10);
     bar (0,0,RESOLUTION_X,40); //mur haut
     bar (0,40,40,RESOLUTION_Y ); // mur gauche
     bar (RESOLUTION_X-40,40,RESOLUTION_X,RESOLUTION_Y ); //mur a droite
     getch();
     closegraph();

}
