#include "C++pilhas.h"
#include <iostream>
using namespace std;

int main() {
    Stack pilha(5);   // cria uma pilha de tamanho 5

    pilha.push('A');
    pilha.push('B');
    pilha.push('C');

    cout << "Pilha atual: ";
    pilha.print();

    cout << "Pop: " << pilha.pop() << endl;
    cout << "Pop: " << pilha.pop() << endl;

    cout << "Pilha depois dos pops: ";
    pilha.print();

    return 0;
}