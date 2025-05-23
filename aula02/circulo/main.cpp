#include <iostream>
#include "circulo.h"

using namespace std;

int main()
{
    Circulo c1; //{0.0, 0, 0}
    Circulo c2(15.7, 8, -5);
    Circulo c3(7.7); // {7.7, 0, 0}

    cout << "\nCirculo c1: ";
    c1.imprime();
    cout << "radius c1 = " << c1.get_radius() << endl;
    
    c1.set_radius(10.0);
    c1.set_origin(5, 7);

    cout << "Circulo c1 modificado: ";
    c1.imprime();
    cout << "Area c1 = " << c1.area() << endl;
    cout << "Diametro c1 = " << c1.diametro() << endl;
    cout << "radius c1 = " << c1.get_radius() << endl;


    cout << "\nCirculo c2: ";
    c2.imprime();
    cout << "\nCirculo c3: ";
    c3.imprime();

    return 0;
}