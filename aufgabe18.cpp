#include "aufgabe18.h"
#include <string>
#include <iostream>
Lebensmittel::Lebensmittel(std::string n)
{
    Lebensmittel::name = n;
}

void Lebensmittel::zubereiten()
{
    std::cout << "Do sth" <<std::endl;
}

Lebensmittel::~Lebensmittel()
{
  std::cout << "Destructor Lebensmittel" << std::endl;
}

std::string Lebensmittel::getName()
{
    return Lebensmittel::name;
}

Fleisch::Fleisch(std::string n) : Lebensmittel(n)
{
    std::cout << "Constructor Fleisch" << std::endl;
}
Gemuese::Gemuese(std::string n) : Lebensmittel(n)
{
    std::cout << "Constructor Gemuese" << std::endl;
}
Obst::Obst(std::string n) : Lebensmittel(n)
{
    std::cout << "Constructor Obst" << std::endl;
}
void Fleisch::zubereiten()
{
    std::cout << Fleisch::getName() << " Anbraten" << std::endl;
}

void Obst::zubereiten()
{
    std::cout << Obst::getName() << "Schaelen" << std::endl;
}

void Gemuese::zubereiten()
{
    std::cout << Gemuese::getName() << "Puzen" << std::endl;
}

Obst::~Obst()
{
    std::cout << "Destructor Obst" << std::endl;
}
Fleisch::~Fleisch()
{
    std::cout << "Destructor Fleisch" << std::endl;
}
Gemuese::~Gemuese()
{
    std::cout << "Destructor Gemuese" << std::endl;
}