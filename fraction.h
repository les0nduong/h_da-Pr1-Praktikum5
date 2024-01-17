#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
private:
    int denominator;
    int numerator;

public:
    Fraction();
    Fraction(const Fraction &b); // Constructor from a already existing instance
    Fraction &operator=(const Fraction &b);
    ~Fraction();
    int getDenom();
    int getNum();
    void setDenom(int newDenom);
    void setNum(int newNum);
    void format();
    void cancel();

    void print();               // Ausgabe des Bruchs
    void read();                // Eingabe des Bruchs
    Fraction add(Fraction &f1Ref);      // Addition zweier Brüche
    Fraction subtract(Fraction &f1Ref); // Subtraktion zweier Brüche
    Fraction multiply(Fraction &f1Ref); // Multiplikation zweier Brüche
    Fraction divide(Fraction &f1Ref);   // Divison zweier Brüche
};

#endif