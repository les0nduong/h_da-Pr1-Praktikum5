#include "aufgabe19.h"

Herzschrittmacher::Herzschrittmacher(string name_)
{
    this->name = name_;
}

void Herzschrittmacher::gibLaut()
{
    std::cout << this->name << std::endl;
}

Herz::Herz(string name_)
{
    this->name = name_;
}

Herz::Herz()
{
    this->name = "BummBumm";
}

void Herz::gibLaut()
{
    std::cout << this->name << std::endl;
}

SmartWatch::SmartWatch(string name_)
{
    this->name = name_;
}

void SmartWatch::gibLaut()
{
    std::cout << this->name << std::endl;
}

Mensch::Mensch(Herzschrittmacher &refH) 
{
    heart = Herz();
}

void Mensch::setObject(SmartWatch *sW)
{
}

void Mensch::gibLaut()
{
}
