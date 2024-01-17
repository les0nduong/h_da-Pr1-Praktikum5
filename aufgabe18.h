

#ifndef AUFGABE18
#define AUFGABE18
#include<string>
#include<iostream>
using namespace std;


class Lebensmittel
{
    private:
    string name;
    public:
    Lebensmittel(string n);
   virtual ~Lebensmittel();
   virtual void zubereiten();
   string getName();
};

class Fleisch: public Lebensmittel{
    public:
    void zubereiten() override;
    Fleisch(string n);
    ~Fleisch() override;
};
class Obst: public Lebensmittel{
    public:
    void zubereiten() override;
    Obst(string n);
    ~Obst() override;
};
class Gemuese: public Lebensmittel{
    public:
    void zubereiten() override;
    Gemuese(string n);
    ~Gemuese() override;
};






#endif