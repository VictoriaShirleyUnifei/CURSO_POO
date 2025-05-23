//funcao friend

#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <iostream>
#include <cmath>

using namespace std;

class Complexo
{
    private:
       double real, imaginario;
    public:
        Complexo(double = 0, double = 0);
        ~Complexo() { };
        double get_real() {return real;};
        double get_imaginario() {return imaginario;};
        //void imprime();
        friend void imprime(const Complexo&);


        //definindo operadores
        //Complexo operator+(Complexo&); //membro da classe
        friend Complexo operator+(Complexo&, Complexo&); //friend
        Complexo operator-(Complexo&);
        friend ostream& operator<<(ostream&, const Complexo&);
        friend istream& operator>>(istream&, Complexo&);
        //conversao de tipo
        operator int();
       
};

#endif

//Constructor
Complexo::Complexo(double r, double i) : real{r}, imaginario{i} {}

//Sobrecarga de operadores
//soma
// Complexo Complexo::operator+(Complexo& c)
// {
//     double r, i;
//     r = real + c.get_real();
//     i = imaginario + c.get_imaginario();
//     return Complexo(r, i);
// }

//soma - utilizando funcao friend
Complexo operator+(Complexo& c1, Complexo& c2)
{
    double r, i;
    r = c1.real + c2.get_real();
    i = c1.imaginario + c2.get_imaginario();
    return Complexo(r, i);
}


//subtracao
Complexo Complexo::operator-(Complexo& c)
{
    double r, i;
    r = real - c.get_real();
    i = imaginario - c.get_imaginario();
    return Complexo(r, i);
}

// void Complexo::imprime() {
//     cout << real << " + (" << imaginario << ")i" << endl; 
// }


//funcao externa a classe que possui
//acesso ao membro de dados privada
//pois a classe concedeu acesso(friend)
// void imprime(const Complexo& c) {
//     cout << c.real << " + (" << c.imaginario << ")i" << endl; 
// }

ostream& operator<<(ostream& out, const Complexo& c) {
    out << c.real << " + (" << c.imaginario << ")i";
    return out;
}

istream& operator>>(istream& in, Complexo& c) {
    in >> c.real >> c.imaginario;
    return in;
}

Complexo::operator int() {
    return sqrt( real * real + imaginario * imaginario);
}

int main()
{
    // Complexo a{10, 0};
    // Complexo b{10, 15};

    Complexo a, b;

    cout << "Entre com o complexo a: ";
    cin >> a;
    cout << "Agora entre com o complexo b: ";
    cin >> b;

    //a = a + b; //notacao direta e simples
    //a = a.operator+(b); //notacao explicita funcional
    //b = b - a; //como em representacao aritmetica comum

    // cout << "Numeros criados: \n";
    // a.imprime();
    // cout << endl;
    // b.imprime();

    // cout << "Numeros criados: \n";
    // imprime(a);
    // cout << endl;
    // imprime(b);

    //para sobrecarregar cout e cin, usa-se friend
    cout << "Numeros criados: \n";
    cout << a << " e " << b << endl;

    cout << "Convertidos para inteiro: \n";
    cout << int(a) << " e " << int(b);

    return 0;
}