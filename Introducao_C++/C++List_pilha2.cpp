#include "C++List_pilha.h"
#include <iostream>
using namespace std;

int main() {
    Stack pilha;   // repare: SEM tamanho fixo, diferente da versão com array!

    pilha.push('A');
    pilha.push('B');
    pilha.push('C');

    cout << "Pilha atual: ";
    pilha.print();

    cout << "Pop: " << pilha.pop() << endl;
    cout << "Pop: " << pilha.pop() << endl;

    cout << "Pilha depois dos pops: ";
    pilha.print();

    pilha.push('D');
    pilha.push('E');
    pilha.push('F');   // pode continuar crescendo à vontade!

    cout << "Pilha depois de mais pushes: ";
    pilha.print();

    return 0;
}