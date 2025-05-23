#include <iostream>
#include "complexo.h"

using namespace std;

Complexo::Complexo(float r, float i){
    real = r;
    imaginario = i;
}

void Complexo::imprime(){
    cout << real << " + (" << imaginario << ")i";
}

Complexo Complexo::adicao(Complexo& param){
    float x = this->real + param.real;
    float y = this->imaginario + param.imaginario;
    return Complexo {x, y};
}

Complexo Complexo::subtracao(Complexo& param){
    float x = this->real - param.real;
    float y = this->imaginario - param.imaginario;  
    return Complexo {x, y};  
}

//sobrecarga de operadores

//a = b.operator+(c) // a = b + c;
Complexo Complexo::operator+(Complexo& param) {
    float x = this->real + param.real;
    float y = this->imaginario + param.imaginario;
    return Complexo {x, y};
}

//a = b.operator-(c) // a = b - c;
Complexo Complexo::operator-(Complexo& param) {
    float x = this->real - param.real;
    float y = this->imaginario - param.imaginario;  
    return Complexo {x, y};
}

bool Complexo::operator!() {
    if(real == 0 && imaginario == 0) return true;
    return false;

}

//pre-incremento
Complexo& Complexo::operator++() {
    this->real = this->real + 1;
    this->imaginario = this->imaginario + 1;
    return *this; //a = n.operator++();
}

//pos-incremento
Complexo Complexo::operator++(int value) {
    Complexo temp = *this;
    this->real = this->real + 1;
    this->imaginario = this->imaginario + 1;
    return temp; //a = n.operator++();
}
