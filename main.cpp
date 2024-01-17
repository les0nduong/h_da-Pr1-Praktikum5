#include <iostream>
#include "fraction.h"
#include "aufgabe18.h"
using namespace std;

int main()
{
    Fraction ersteBruch = Fraction();
    ersteBruch.read();
    ersteBruch.print();
    Lebensmittel mittagessen("Mittagessen");
    Fleisch steak("Steak");
    Obst apfel("Apfel");
    Obst banane("Banane");
    Gemuese paprika("Paprika");
    mittagessen.zubereiten();
    steak.zubereiten();
    apfel.zubereiten();
    banane.zubereiten();
    paprika.zubereiten();
    steak.Lebensmittel::zubereiten();
    return 0;
}