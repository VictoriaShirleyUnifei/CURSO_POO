#include "data.h"
#include <iostream>

using namespace std;

int Data::qtd = 0;

//construtor
// Data::Data(int dd, int mm, int aa) {
//     d = dd;
//     m = mm;
//     a = aa;
// }

//outra forma de fazer o construtor
Data::Data(int dd, int mm, int aa) : d{dd}, m{mm}, a{aa} {
    //cout << "Objeto inicializado!\n";
    contador = 0;
    qtd++;
}

Data::~Data() {
    //cout << "Objeto destruido!\n"; 
    qtd--;
}

//imprime a data e conta a quantidade de chamadas
void Data::imprime() const {
    cout << d << "/" << m << "/" << a;
    contador++;
}


// void Data::set_dia(int value) {
//     if(value > 0 && value <= 31)
//         d = value;
//         //this->d = value; //a variavel d do objeto this vai receber value
// }

// void Data::set_mes(int value) {
//     if(value > 0 && value <= 12)
//         m = value;
//         //this->m = value; //a variavel m do objeto this vai receber value

// }

// void Data::set_ano(int value) {
//     if(value >= 0)
//         a = value;
//         //this->a = value; //a variavel a do objeto this vai receber value
// }

//autorreferencia
Data& Data::set_dia(int value) {
    if(value > 0 && value <= 31)
        d = value;
    return *this;
}

Data&  Data::set_mes(int value) {
    if(value > 0 && value <= 12)
        m = value;
    return *this;
}

Data&  Data::set_ano(int value) {
    if(value >= 0)
        a = value;
    return *this;
}
