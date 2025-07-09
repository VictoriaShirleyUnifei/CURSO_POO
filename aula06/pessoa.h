#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa {
    protected:
        string nome;
        string endereco;
    
    public:
        Pessoa(string, string);
        ~Pessoa() { }
        void setEndereco(string);
        void imprime();
};

#endif