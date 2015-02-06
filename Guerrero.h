#ifndef GUERRERO_H
#define GUERRERO_H

#include "Personaje.h"

class Guerrero : public Personaje
{
    public:
        Guerrero();
        virtual ~Guerrero();
        void act();
        void draw();
    protected:
    private:
};

#endif // GUERRERO_H
