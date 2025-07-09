#include "pessoa.h"
#include "aluno.h"
#include "professor.h"
#include <iostream>

using namespace std;

int main() {
    Pessoa p1 {"Joao", "Itajuba-MG"};
    cout << "Pessoa: " << endl;
    p1.imprime();

    cout << "\nAluno: " << endl;
    Aluno a1 {"Victoria", "Itajuba-MG", "SIN", 2024};
    a1.imprime();

    cout << "\nProfessor: " << endl;
    Professor pr1 {"Jose", "Sao Paulo - SP", 689910, 3, "IESTI"};
    pr1.imprime();

    Pessoa p2 = pr1;
    cout << "\nOutra pessoa: " << endl;
    p2.imprime();

    return 0;
}