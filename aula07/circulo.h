#ifndef CIRCULO_H
#define CIRCULO_H

#include "forma.h"

class Circulo : public Forma {
    private:
        double r;
    public:
        Circulo(double, double, double);
        ~Circulo();

        double area();
        void imprime_dados();
    };

#endif