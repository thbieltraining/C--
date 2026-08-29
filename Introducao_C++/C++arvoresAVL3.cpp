#include "C++arvoresAVL.h"
#include <iostream>
using namespace std;

int main() {
    ArvoreAVL arvore;

    cout << "Inserindo 10, 20, 30, 40, 50 (ORDEM CRESCENTE - quebraria uma BST comum!)" << endl;
    arvore.inserir(10);
    arvore.inserir(20);
    arvore.inserir(30);   // aqui já dispara a primeira rotação!
    arvore.inserir(40);
    arvore.inserir(50);

    cout << "\nArvore em ordem (com alturas de cada no): ";
    arvore.imprimirEmOrdem();

    return 0;
}
