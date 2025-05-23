//string
#include <iostream>

using namespace std;

int main() 
{
    string nome = "";
    string sobrenome = "";

    cout << "Entre com o seu nome: ";
    getline(cin, nome); //pega o conteudo inteiro da linha mesmo com espaço

    cout << "Entre com o seu sobrenome: ";
     getline(cin, sobrenome);

    string nome_completo = nome + " " + sobrenome;
    cout << "Nome completo: " << nome_completo << "\n";

    return 0;
}

// int main() 
//{
//     string nome = "";
//     string sobrenome = "";

//     cout << "Entre com o seu nome: ";
//     cin >> nome;

//     cout << "Entre com o seu sobrenome: ";
//     cin >> sobrenome;

//     string nome_completo = nome + " " + sobrenome;
//     cout << "Nome completo: " << nome_completo << "\n";

//     return 0;
// }