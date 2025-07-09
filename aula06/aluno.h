#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.h"

class Aluno : public Pessoa {
    private:
        string curso;
        int matricula;
    public:
        Aluno(string, string, string, int);
        ~Aluno() {};
        void imprime();
        void setCurso(string);
};

#endif