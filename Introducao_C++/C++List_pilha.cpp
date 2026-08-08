#include "C++List_pilha.h"
#include <iostream>
using namespace std;

Stack::Stack() {
    topo = nullptr;   // pilha começa vazia
}

bool Stack::isEmpty() const {
    return topo == nullptr;
}

void Stack::push(itemType value) {
    No* novo = new No;
    novo->valor = value;
    novo->proximo = topo;   // o novo nó aponta pro que ERA o topo
    topo = novo;              // o novo nó VIRA o topo
}

itemType Stack::pop() {
    if (isEmpty()) {
        cout << "Pilha vazia!" << endl;
        return itemType();
    }

    No* antigoTopo = topo;
    itemType valor = topo->valor;
    topo = topo->proximo;      // o segundo nó vira o novo topo
    delete antigoTopo;         // libera a memória do nó removido
    return valor;
}

void Stack::print() const {
    No* atual = topo;
    while (atual != nullptr) {
        cout << atual->valor << ' ';
        atual = atual->proximo;
    }
    cout << endl;
}

// Destrutor: esvazia a pilha inteira, liberando cada nó
Stack::~Stack() {
    while (!isEmpty()) {
        pop();   // reaproveitando o próprio pop() pra liberar tudo!
    }
}