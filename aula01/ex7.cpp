//tipos definidos pelo usuario
#include <iostream>

using namespace std;

struct Tempo 
{
    int hora;
    int minuto;
    int segundo;
};

int main() 
{
    Tempo t {8, 10, 52};

    cout << "Hora: " << t.hora << ":" << t.minuto;
    cout << ":" <<  t.segundo << "\n";

    return 0;
}

//os membros de dados da estrutura podem 
//ser acessador de duas maneiras,
//dependendo se a referencia esta sendo realizada
//a partir de um objeto(operador ponto)
//ou de um ponteiro para objeto(operador seta)
// int main()
// {
//     Tempo temp {0, 30, 5};
//     Tempo *temptr = &temp;

//     temp.hora = 10;
//     cout << "Membro hora: " << temptr->hora << "\n";

//     return 0;
// }

//imprime hora sem modificar valor
// void print_time(const Tempo& t)
// {
//     cout << t.hora << ":" << t.minuto;
// }


//como seria usando classes
// class Tempo {
//     //membros publicos podem ser acessados de fora da classe
//     //proveem mecanismos para realizacao de qualquer operacao
//     public:
//         Tempo();
//         void setTempo(int, int, int);
//         void imprime();
    
//     //membros privados(nao podem ser acessados fora da classe)    
//     private: 
//         int hora, minuto, segundo;
// }