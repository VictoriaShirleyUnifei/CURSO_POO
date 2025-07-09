#ifndef RETANGULO_H
#define RETANGULO_H

#include "forma.h"

class Retangulo : public Forma {
    private:
        double b, h;
    public:
        Retangulo(double, double, double, double);
        ~Retangulo() { } 

        void imprime_dados();
        double area();
};

#endif