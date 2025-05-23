//vetor
#include <iostream>

using namespace std;

int main() 
{
    int vector[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Percorrendo o vetor de maneira normal: \n";
    for(int i = 0; i < 10; i++) {
        cout << vector[i] << " - ";
    }

    cout << "\n\nPercorrendo com range-for: \n";
    for(int x : vector) {
        cout << x << " - ";
    }

    return 0;
}