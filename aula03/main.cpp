#include <iostream>
#include "data.h"

using namespace std;

int main() {
    Data aniversario {3, 12, 2001};

    aniversario.set_dia(4); //valor invalido
    
    cout << "Meu aniversario: ";
    aniversario.imprime();

    // cout << "\nMeu aniversario: (de novo)";
    // aniversario.imprime();

    // cout << "\nMes do aniversario: " << aniversario.get_mes() << endl;

    //cout << "\nContador = " << aniversario.get_contador() << endl;

    Data hoje {22, 05, 2025};
    cout << "\n\nHoje: ";
    hoje.imprime();

    //autorreferencia
    hoje.set_dia(23).set_mes(06).set_ano(2026);
    cout << "\n\nHoje: ";
    hoje.imprime();
    
    //qtd é compartilhado por todas as instancias da classe
    //qtd_instancias pertence a classe
    //cout << "\nQuantas instancias ativas? " << Data::qtd_instancias() << endl;
    // cout << "Quantas instancias ativas? " << aniversario.qtd_instancias() << endl;
    // cout << "Quantas instancias ativas? " << hoje.qtd_instancias() << endl;

    return 0;
}