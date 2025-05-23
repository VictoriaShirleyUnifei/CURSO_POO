#ifndef CIRCULO_H
#define CIRCULO_H //include guards

class Circulo {
    private:
        float radius;
        int x, y;
    
    public:
        Circulo();
        Circulo(float, int = 0, int = 0);
        ~Circulo() {};
    
        //funcoes membro interface
        float area();
        float diametro();
        float set_radius(float); //setter - tem regras
        void set_origin(int, int); //setter - tem regras
        float get_radius(); //getter
        void imprime();
};

#endif