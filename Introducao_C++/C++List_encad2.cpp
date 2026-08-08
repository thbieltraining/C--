// Agora a implementação das funções da lista encadeada

#include "C++List_encad.h"
#include <iostream>
using namespace std;

int main() {
    ListaLigada lista;

    lista.inserirNoFim(10);
    lista.inserirNoFim(20);
    lista.inserirNoFim(30);
    cout << "Lista apos inserir no fim: ";
    lista.imprimir();

    lista.inserirNoInicio(5);
    cout << "Lista apos inserir no inicio: ";
    lista.imprimir();

    cout << "Buscar 20: " << (lista.buscar(20) ? "encontrado" : "nao encontrado") << endl;
    cout << "Buscar 99: " << (lista.buscar(99) ? "encontrado" : "nao encontrado") << endl;

    lista.remover(20);
    cout << "Lista apos remover 20: ";
    lista.imprimir();

    lista.remover(5);
    cout << "Lista apos remover 5 (inicio): ";
    lista.imprimir();

    return 0;
}

// Roda esses arquivos no terminal e me conta o que acontece.