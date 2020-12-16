#ifndef OBJET_H
#define OBJET_H


class Objet
{
    public:
        Objet();
        virtual ~Objet()= default;
        virtual void move()=0;

    protected:

    private:
};

#endif // OBJET_H
