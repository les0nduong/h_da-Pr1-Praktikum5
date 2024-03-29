#ifndef AUFGABE19_H
#define AUFGABE19_H

#include <iostream>
#include <vector>
using namespace std;

class Herzschrittmacher
{
public:
    Herzschrittmacher();
    Herzschrittmacher(string name);
    void gibLaut();

private:
    string name;
};

class Herz
{
public:
    Herz(string name_ = "BummBumm") : name(name_){};
    void gibLaut();

private:
    string name;
};

class SmartWatch
{
public:
    SmartWatch(string name_ = "TickTick") : name(name_){};
    void gibLaut();

private:
    string name;
};

class Mensch
{
public:
    // Mensch();
    Mensch(Herzschrittmacher &refH);
    void setObject(SmartWatch *sW);
    void gibLaut();

private:
    Herzschrittmacher pacemaker; // Aggregation
    Herz heart;                  // Komposition
    SmartWatch* sw;     // Assoziation
};
#endif
