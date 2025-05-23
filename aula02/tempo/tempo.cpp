#include "tempo.h"
#include <iostream>

using namespace std;

Tempo::Tempo() {
    hora = 0;
    minuto = 0;
    segundo = 0;
}

Tempo::Tempo(int hh, int mm, int ss) {
    setTempo(hh, mm, ss);
}

void Tempo::setTempo(int hh, int mm, int ss) {
    if(hh >=0 && hh <= 23)
        hora = hh;
    else    
        hora = 0;

    if(mm >=0 && mm <= 59)
        minuto = mm;
    else    
        minuto = 0;

    if(ss >=0 && ss <= 59)
        segundo = ss;
    else    
        segundo = 0;
} 

void Tempo::imprime() {
    cout << "{" << hora << ":" << minuto << ":" << segundo << "}" << endl;
}
