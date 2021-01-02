#include "mur.h"
#include "graphics.h"
#include"constVariables.h"
mur::mur(int largeur,int hauteur,int couleur): d_largeur{largeur},
                                                d_hauteur{hauteur},
                                                d_couleur{couleur}
{
    void bar(int 0, int 0, int largeur, int hauteur );
}
/* les trois murs à créer :
Haut : mur (RESOLUTION_X,40,16)
Gauche: mur (40,RESOLUTION_Y,16)
Droit: mur (40,RESOLUTION_Y,16)
*/
mur::~mur()
{

}
int largeur()const {return d_largeur;}
int hauteur()const {return d_hauteur};
int couleur()const {return d_couleur};
