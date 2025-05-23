//funcao inline~
#include <iostream>

using namespace std;

inline double square(double d)
{
    return d * d;
}

int main() 
{
    cout << "Entre com um numero real: ";

    double real;
    cin >> real;

    cout << real << "^2 = " << square(real) << "\n";
    cout << real << "^2 = " << real * real << "\n"; //equivalente

    return 0;
}

//alguns compiladores sao capazes de realizar algumas
//operacoes inline ainda mais impressionantes

// inline int fatorial(int n) {
//     return (n < 2 ? 1 : n * fatorial(n - 1));
// }