#ifndef MAGO_H
#define MAGO_H

#include "Personaje.h"

class Mago : public Personaje
{
    public:
        Mago();
        virtual ~Mago();
        void act();
        void draw();
    protected:
    private:
};

#endif // MAGO_H
