#include <iostream>
#include "fraction.h"

using namespace std;
void ignoreLine()
{
    cin.ignore(259, '\n');
}

Fraction::~Fraction()
{
    cout << "Destruktor aufgerufen" << endl;
}

int Fraction::getDenom()
{
    int output = denominator;
    return output;
}
int Fraction::getNum()
{
    int output = numerator;
    return output;
}
void Fraction::setDenom(int newDenom)
{
    this->denominator = newDenom;
}
void Fraction::setNum(int newNum)

{
    this->numerator = newNum;
}

void Fraction::print()
{
    cout << Fraction::getNum() << " / " << Fraction::getDenom() << endl;
}

int gcd(int p, int q) // Berechnung größter gemeinsamer Teiler
{
    while (q != 0)
    {
        int r = p % q;
        p = q;
        q = r;
    }
    return p;
}
void Fraction::cancel() // Kürzen des Bruchs
{
    int gcdNumDenom = gcd(Fraction::numerator, Fraction::denominator);
    setNum(Fraction::numerator /= gcdNumDenom);
    Fraction::setDenom(Fraction::denominator /= gcdNumDenom);
}
void Fraction::format() // Bruch formatieren (Aufruf am Ende der vier
{
    Fraction::cancel();
    if (Fraction::getDenom() < 0)
    {
        Fraction::numerator = -Fraction::numerator;
        Fraction::denominator = -Fraction::denominator;
    }
}
Fraction::Fraction()
{
    cout << "Konstruktor aufgerufen" << endl;
    Fraction::denominator = 1;
    Fraction::numerator = 0;
}

void Fraction::read()
{
    int inputAbove{}, inputLower{};
    bool validAbove = false;
    bool validLower = false;
    while (!validAbove)
    {
        if (!inputAbove)
        {
            cout << "Zaehler: ";

            cin >> inputAbove;
            cout << endl;
        }
        if (!cin)
        {
            cout << "Falsche Eingabe!" << endl;
            cin.clear();
            ignoreLine();
        }

        else
        {

            validAbove = true;
            ignoreLine();
        }
    }
    while (!validLower)
    {

        if (!inputLower)
        {

            cout << "Nenner: ";
            cin >> inputLower;
            cout << endl;
        }

        if (!cin)
        {
            cout << "Falsche Eingabe!" << endl;
            cin.clear();
            ignoreLine();
        }
        if (inputLower == 0)
        {
            cout << "bruh" << endl;
        }
        else

        {
            validLower = true;
            ignoreLine();
        }
    }

    Fraction::numerator = inputAbove;
    Fraction::denominator = inputLower;
    Fraction::format();
}