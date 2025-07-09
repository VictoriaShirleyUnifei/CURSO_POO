#include "forma.h"
#include "retangulo.h"
#include "circulo.h"
#include <iostream>

using namespace std;

// int main() {
//     Forma ponto1 {10.0, 20.0};
//     cout << "Forma: " << endl;
//     ponto1.imprime_dados();
//     cout << "\nArea = " << ponto1.area() << endl;

//     cout << "\nRetangulo: " << endl;
//     Retangulo ret1 {0, 0, 10, 50};
//     ret1.imprime_dados();

//     return 0;
// }

// utilizando ponteiros
// int main() {
//     Forma* ponto1 = new Forma{10.0, 20.0};
//     cout << "Forma: " << endl;
//     ponto1->imprime_dados();
//     cout << "\nArea = " << ponto1->area() << endl;

//     cout << "\nRetangulo: " << endl;
//     Forma* ret1 = new  Retangulo{0, 0, 10, 50};
//     ret1->imprime_dados();

//     cout << "\nCirculo: " << endl;
//     Forma* circ1 = new  Circulo{0, 0, 10};
//     circ1->imprime_dados();

//     return 0;
// }

//vetor de formas
int main() {
    Forma* vetor_formas[5];
    vetor_formas[0] = new Retangulo{10, 30, 45, 21};
    vetor_formas[1] = new Forma{100, 120};
    vetor_formas[2] = new Circulo{0, 0, 15.5};
    vetor_formas[3] = new Circulo{9.0, 0.75, 1};
    vetor_formas[4] = new Retangulo{0, 0, 10, 10};

    for(auto x : vetor_formas) {
        cout << "Forma: " << endl;
        x->imprime_dados();
        cout << "\n\n";
    }

    return 0;
}