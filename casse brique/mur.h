#ifndef MUR_H
#define MUR_H


class mur
{
    public:
        mur(int largeur,int hauteur,int couleur);
        virtual ~mur();
        int largeur()const;
        int hauteur()const;
        int couleur()const;
    protected:

    private:
        int d_largeur;
        int d_hauteur;
        int d_couleur;
};

#endif // MUR_H
