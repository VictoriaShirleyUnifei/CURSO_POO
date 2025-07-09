#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "pessoa.h"

class Professor : public Pessoa {
    private:
        int siape;
        int categoria;
        string instituto;
    public:
        Professor(string, string, int, int, string);
        ~Professor() {};
        int promover() { return ++categoria; };
        void setInstituto(string i) { instituto = i; };
        void imprime();
};

#endif