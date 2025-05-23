#ifndef COMPLEXO_H
#define COMPLEXO_H

class Complexo
{
    private:
        float real, imaginario;
    public:
        Complexo(float = 0.0, float = 0.0);
        ~Complexo() { };

        void imprime();
        Complexo adicao(Complexo&);
        Complexo subtracao(Complexo&);

        //com sobrecarga de operadores
        Complexo operator+(Complexo&);
        Complexo operator-(Complexo&);
        bool operator!();
        Complexo& operator++(); //pre-incremento
        Complexo operator++(int); //pos-incremento
};

#endif