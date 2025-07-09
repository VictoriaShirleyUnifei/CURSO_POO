#include "forma.h"
#include "retangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo(double xx, double yy, double bb, double hh) 
    : Forma{xx, yy}, b{bb}, h{hh} { }

double Retangulo::area() {
    return b * h;
}

void Retangulo::imprime_dados() {
    Forma::imprime_dados();

    cout << "\nBase: " << b << " e altura = " << h << endl;
    cout << "Area: " << area() << endl;
}