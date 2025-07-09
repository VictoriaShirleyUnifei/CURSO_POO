#ifndef FORMA_H
#define FORMA_H

class Forma {
    protected:
        double x, y;
    public: 
        Forma(double = 0, double = 0);
        ~Forma() { }

        virtual void imprime_dados();
        virtual double area() { return 0; };
};

#endif