#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    vector<int> idades;
    vector<int>::iterator it;

    idades.push_back(20);
    idades.push_back(17);
    idades.push_back(45);
    idades.push_back(24);

    cout << "Tamanho do vetor: " << idades.size() << endl;
    cout << "Elemento na posição 3: " << idades.at(3) << endl;
    idades.pop_back();

    cout << "Vetor desordenado: ";
    for(int i = 0; i < idades.size(); i++) {
        cout << idades[i] << " ";
    }

    sort(idades.begin(), idades.end());

    cout << "\nVetor ordenado: ";
    for(it = idades.begin(); it != idades.end(); ++it) 
        cout << (*it) << " ";

    return 0;
}