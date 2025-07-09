#include <iostream>
#include <stdexcept>

using namespace std;

class dividePorZeroException: public runtime_error
{
	public:
		//construtor especifica mensagem de erro padrão
		dividePorZeroException()
			: runtime_error("Tentativa de divisão por zero.") {}
};

int quociente(int n, int d) {
	if(d == 0)
        //throw runtime_error("Tentativa de divisão por zero!");
        throw dividePorZeroException();
    return n / d;
}

int main()
{
	int x = 0, y = 0;
	cout << "Entre com os valores de x e y: ";
	cin >> x >> y;
	
	try {
		cout << "Resultado: " << quociente(x, y) << "\n";
	} catch (dividePorZeroException &ex) {
		cout << "Ocorreu um erro: " << ex.what() << "\n";
     } 
    //catch (runtime_error &ex){
	// 	cout << "Ocorreu um erro: " << ex.what() << "\n";
	// }

    cout << "Programa finalizado!!" << endl;
    
    return 0;
}