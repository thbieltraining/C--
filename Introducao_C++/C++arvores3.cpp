// Vamos aplicar na prática agora: 

#include "C++arvores.h"
#include <iostream>
using namespace std;

int main() {
    ArvoreBinaria arvore;

    arvore.inserir(50);
    arvore.inserir(30);
    arvore.inserir(70);
    arvore.inserir(20);
    arvore.inserir(40);
    arvore.inserir(60);
    arvore.inserir(90);

    cout << "Arvore em ordem (deve sair CRESCENTE): ";
    arvore.imprimirEmOrdem();

    cout << "Buscar 40: " << (arvore.buscar(40) ? "encontrado" : "nao encontrado") << endl;
    cout << "Buscar 100: " << (arvore.buscar(100) ? "encontrado" : "nao encontrado") << endl;

    return 0;
}