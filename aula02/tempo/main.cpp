#include <iostream>
#include "tempo.h"

using namespace std;

int main() {
    // duas instancias, cada um com seu atributo
    Tempo padrao;
    Tempo custom(11, 20, 36);

    cout << "Hora padrao: ";
    padrao.imprime();

    cout << "\nHora customizada: ";
    custom.imprime();

    padrao.setTempo(110, 25, 00);
    cout << "Hora padrao atualizada: ";
    padrao.imprime();

    return 0;
}