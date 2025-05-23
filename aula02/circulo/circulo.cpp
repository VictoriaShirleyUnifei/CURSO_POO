#include "circulo.h"
#include <iostream>

using namespace std;

Circulo::Circulo() {
    radius = 0.0;
    x = 0;
    y = 0;
}

Circulo::Circulo(float rr, int xx, int yy) {
    radius = rr;
    x = xx;
    y = yy;
}

float Circulo::area() {
    return radius * radius * 3.141592;
}

float Circulo::diametro() {
    return radius * 2;
}

float Circulo::set_radius(float rr) {
    if(rr > 0) radius = rr;
    else radius = 0;
} 

void  Circulo::set_origin(int xx, int yy) {
    x = xx;
    y = yy;
}

float Circulo::get_radius() {
    return radius;
}

void Circulo::imprime() {
    cout << "{ radius = " << radius << ", x = " << x << ", y = " << y << "}" << endl;
}