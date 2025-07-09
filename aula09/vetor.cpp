#include <iostream>
#include <cstdlib>

using namespace std;

template <typename T>
void print_vetor(T *v, int sz) {
    for(int i = 0; i < 10; i++) {
        cout << v[i] << " ";
    }
}

int main() {
    float vf[10];
    int vi[10];

    //preencher os vetores
    for(int i = 0; i < 10; i++)
        vf[i] = (float)(rand()%100)/100.0;
    
    for(int i = 0; i < 10; i++)
        vi[i] = rand() % 100;

    //imprimir vetores
    cout << "\nVetor de float: ";
    print_vetor(vf, 10);
    cout << "\nVetor de int: ";
    print_vetor(vi, 10);

    return 0;
}