#include <iostream>
#include "complexo.h"

using namespace std;

int main()
{
    Complexo n1 {10, 20};
    Complexo n2 {5, 15};

    cout << "n1 = ";
    n1.imprime();
    cout << endl;

    cout << "n2 = ";
    n2.imprime();
    cout << endl;

    //sem sobrecarga de operadores
    // Complexo n3, n4;
    // n3 = n1.adicao(n2); //n3 = n1 + n2;
    // n4 = n1.subtracao(n2); //n4 = n1 - n2;

    // cout << "n3 (adicao) = ";
    // n3.imprime();
    // cout << endl;

    // cout << "n4 (subtracao)= ";
    // n4.imprime();
    // cout << endl;

    //com sobrecarga de operadores
    Complexo n3, n4;

    if(!n3 && !n4)
        cout << "\nn3 e n4 inicialmente iguais a 0.\n";

    n3 = n1 + n2; //a = b.operator+(c) 
    n4 = n1 - n2; //a = b.operator-(c) 

    cout << "n3 (adicao) = ";
    n3.imprime();
    cout << endl;

    cout << "n4 (subtracao)= ";
    n4.imprime();
    cout << endl;

    // n1 = ++n2; //n2++; n1 = n2
    // cout << "Depois do pre incremento: \n";
    // cout << "n1 = ";
    // n1.imprime();
    // cout << endl;

    // cout << "n2 = ";
    // n2.imprime();
    // cout << endl;

    n1 = n2++; // n1 = n2; n2++
    cout << "Depois do pos incremento: \n";
    cout << "n1 = ";
    n1.imprime();
    cout << endl;

    cout << "n2 = ";
    n2.imprime();
    cout << endl;

    return 0;
}