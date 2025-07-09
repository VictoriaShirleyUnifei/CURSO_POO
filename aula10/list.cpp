#include <list>
#include <iostream>
#include <string>

using namespace std;

int main() {
    list<string> nomes;
    list<string>::iterator it;

    nomes.push_back("John");
    nomes.push_back("Paul");
    nomes.push_front("Mary");

    it = nomes.begin();
    nomes.insert(it, "Joseph");
    ++it;
    ++it;
    nomes.remove("Mary");

    cout << "Lista encadeada de nomes: " << endl;

    for(it = nomes.begin(); it != nomes.end(); it++)
        cout << *it << " ";

}