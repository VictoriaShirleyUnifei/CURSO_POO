// arquivo de cabecalho (header)
#ifndef TEMPO_H
#define TEMPO_H //include guards

class Tempo {
    //membros privados
    private:
        int hora, minuto, segundo; //membros de dados
    
    public:
        Tempo(); //construtor - inicializar
        Tempo(int, int, int);
        void setTempo(int, int, int);
        void imprime();
        ~Tempo() { }; //destruindo
};

//construtor e destrutor deve ter o mesmo nome da classe

#endif