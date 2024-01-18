#include <iostream>
#include "fraction.h"
#include "aufgabe18.h"
#include "aufgabe19.h"
using namespace std;

void aufgabe17()

{
    // local variables!
    Fraction f1; // Standardkonstruktor mir vorbelegten Werten
    Fraction f2; // siehe oben
    Fraction result;
    f1.read();
    f2.read();
    cout << endl
         << "Erster Bruch: ";
    f1.print();
    cout << "Zweiter Bruch: ";
    f2.print();
    cout << endl
         << "Addition:" << endl; // Addition
    result = f1.add(f2);
    result.print();
    cout << endl
         << "Subtraktion:" << endl; // Substraktion
    result = f1.subtract(f2);
    result.print();
    cout << endl
         << "Multiplikation:" << endl; // Multiplikation
    result = f1.multiply(f2);
    result.print();
    cout << endl
         << "Division: " << endl; // Division
    result = f1.divide(f2);
    result.print();
    Fraction f3 = result; // Kopierkonstruktor
    f3.print();
    f3 = f1; // Zuweisungsoperator
    f3.print();
}

void aufgabe18()
{
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
}
void aufgabe19(){
        Herzschrittmacher HsMaker;
        SmartWatch swa;
        Mensch superman(HsMaker);
        superman.setObject(&swa);
        superman.gibLaut();
}
int main()
{
    // aufgabe17();
    //aufgabe18();
    aufgabe19();
    return 0;
}