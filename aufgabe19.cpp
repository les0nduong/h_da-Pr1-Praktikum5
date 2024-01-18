#include "aufgabe19.h"
Mensch::Mensch(Herzschrittmacher &refH)
{
    this->heart = Herz();
    this->pacemaker = refH;
}

void Mensch::setObject(SmartWatch *sW)
{
    sw = sW;
}

void Mensch::gibLaut()
{
    heart.gibLaut();
    pacemaker.gibLaut();
    sw->gibLaut();
}

Herzschrittmacher::Herzschrittmacher(string name_)
{
    this->name = name_;
}
Herzschrittmacher::Herzschrittmacher()
{
    this->name = "PochPoch";
}
void Herzschrittmacher::gibLaut()
{
    std::cout << this->name << std::endl;
}

void Herz::gibLaut()
{
    std::cout << this->name << std::endl;
}

void SmartWatch::gibLaut()
{
    std::cout << this->name << std::endl;
}