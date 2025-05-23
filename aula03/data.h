#ifndef DATA_H
#define DATA_H //include guards

class Data
{
    private:
        int d, m, a;
        mutable int contador;
        static int qtd;

    public:
        Data(int = 1, int = 1, int = 2001); //valor default
        //~Data() {}; //in-class
        ~Data();
        int get_dia() const { return d;};
        int get_mes() const { return m;};
        int get_ano() const { return a;};
        int get_contador() const {return contador;};
        void imprime() const;
        static int qtd_instancias() {return qtd;};

        // void set_dia(int);
        // void set_mes(int);
        // void set_ano(int);
        
        Data& set_dia(int);
        Data&  set_mes(int);
        Data&  set_ano(int);
};


#endif