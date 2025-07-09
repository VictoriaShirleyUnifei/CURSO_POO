#include <iostream>
#include "pilha.h"
#include <cstdlib>

using namespace std;

int main() {
    Pilha<int> p{50};
    int v = 0;

    cout << "Inserindo itens na pilha: \n";
    while(v != -1) {
        cin >> v;
        p.push(v);
    }

    cout << "Removendo itens... \n";
    while(!(p.is_empty())) {
        p.pop(v);
        cout << v << " ";
    }

    return 0;
}