#ifndef PILHA_H
#define PILHA_H

template <typename T>
class  Pilha {
    private:
        int tamanho;
        int topo; 
        T *pilha;
    public:
        Pilha(int = 10);
        ~Pilha() {
            delete[] pilha;
        }

        bool push(T&);
        bool pop(T&);

        bool is_empty() {
            if(topo == -1) return true;
            return false;
        }

        bool is_full() {
            if(topo == (tamanho -1)) return true;
            return true;
        }
};

#endif

template <typename T>
Pilha<T>::Pilha(int sz) {
    tamanho = (sz > 0 ? sz : 10);
    topo = -1;
    pilha = new T[tamanho];
}

template <typename T>
bool Pilha<T>::push(T &valor) {
    if(is_full()) return false;
    topo++;
    pilha[topo] = valor;
    return true;
}


template <typename T>
bool Pilha<T>::pop(T &valor) {
    if(is_empty()) return false;
    valor = pilha[topo];
    topo--;
    return true;
}