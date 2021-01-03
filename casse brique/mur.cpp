#include "mur.h"
#include "graphics.h"
#include "constVariables.h"
mur::mur(int xh,int yh,int largeur,int hauteur,int couleur):
                                                d_xh{xh},
                                                d_yh{yh},
                                                d_largeur{largeur},
                                                d_hauteur{hauteur},
                                                d_couleur{couleur}
{
     setcolor(couleur);
     bar(xh,yh,largeur,hauteur );
}

mur::~mur()
{

}
int xh()const {return d_xh;}
int yh()const {return d_yh;}
int largeur()const {return d_largeur;}
int hauteur()const {return d_hauteur};
int couleur()const {return d_couleur};
