#include "Guerrero.h"

Guerrero::Guerrero()
{
    tipo = "Guerrero";
}

Guerrero::~Guerrero()
{
    //dtor
}

void Guerrero::act()
{
    cout<<"Act Guerrero"<<endl;
}

void Guerrero::draw()
{
    cout<<"Draw Guerrero"<<endl;
}
