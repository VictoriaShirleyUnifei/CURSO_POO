//ponteiro e referencia
#include <iostream>

using namespace std;

void soma(int x, int y, int z) {
    z = x + y;
}

void soma2(int *x, int *y, int *z) {
    *z = *x + *y;
}

void soma3(int &x, int &y, int &z) {
    z = x + y;
}

int main() 
{
    int a = 10, b = 20, c = 0;
    soma(a, b, c);
    cout << "Valor de c (por valor): " << c << "\n";

    soma2(&a, &b, &c);
    cout << "Valor de c (por ref ptr): " << c << "\n";

    soma3(a, b, c);
    cout << "Valor de c (por ref ref): " << c << "\n";

    return 0;
}

// int main() 
//{
//     int a = 50;
//     cout << "Valor de a: " << a << "\n";
//     cout << "Endereco de a: " << &a << "\n";

//     int *ptr_a = nullptr;
//     ptr_a = &a;

//     cout << "Valor de ptr_a: " << ptr_a << "\n";
//     cout << "Valor apontado por ptr_a: " << *ptr_a << "\n";

//     //referencia
//     int &refa = a; //apelido para a
//     cout << "Valor apontado pelo refa: " << refa << "\n";

//     return 0;
// }