#include "Personaje.h"
#include "Arquero.h"
#include "Guerrero.h"
#include "Mago.h"
#include <iostream>
#include <vector>
using namespace std;


class Padre
{
public:
    Padre()
    {
        cout<<"Padre"<<endl;
    }
    Padre(string str)
    {
        cout<<"Otro Padre"<<endl;
    }
};

class Hijo : public Padre
{
public:
};

int main()
{
    Hijo h;
//    vector<Personaje*>personajes;
//    personajes.push_back(new Arquero());
//    personajes.push_back(new Mago());
//    personajes.push_back(new Guerrero());
//
//    for(int i=0;i<personajes.size();i++)
//    {
//        personajes[i]->act();
//        personajes[i]->draw();
//    }
//    return 0;
}
