#ifndef MUR_H
#define MUR_H

class mur
{
    public:
        mur(int xh,int yh,int largeur,int hauteur,int couleur);
        virtual ~mur();
        int xh()const;
        int yh()const;
        int largeur()const;
        int hauteur()const;
        int couleur()const;
    protected:

    private:
        int d_xh;
        int d_yh;
        int d_largeur;
        int d_hauteur;
        int d_couleur;

};

#endif // MUR_H
