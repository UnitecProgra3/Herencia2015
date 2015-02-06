#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
using namespace std;

class Personaje
{
    public:
        string tipo;
        Personaje();
        virtual ~Personaje();
        virtual void draw() = 0;
        virtual void act() = 0;
    protected:
    private:
};

#endif // PERSONAJE_H
