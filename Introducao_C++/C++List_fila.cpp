#include "C++List_fila.h"
#include <iostream>
using namespace std;

Queue::Queue() {
    frente = nullptr;
    fim = nullptr;
}

bool Queue::isEmpty() const {
    return frente == nullptr;
}

void Queue::enqueue(itemType value) {
    No* novo = new No;
    novo->valor = value;
    novo->proximo = nullptr;   // ele vai ser o novo ÚLTIMO, então aponta pra nada ainda

    if (isEmpty()) {
        // fila vazia: o novo nó é AO MESMO TEMPO frente e fim
        frente = novo;
        fim = novo;
    } else {
        // conecta o antigo último ao novo, e atualiza o ponteiro de fim
        fim->proximo = novo;
        fim = novo;
    }
}

itemType Queue::dequeue() {
    if (isEmpty()) {
        cout << "Fila vazia!" << endl;
        return itemType();
    }

    No* antigaFrente = frente;
    itemType valor = frente->valor;
    frente = frente->proximo;   // o segundo nó vira a nova frente

    if (frente == nullptr) {
        // a fila ficou vazia depois dessa remoção!
        fim = nullptr;   // ⚠️ crucial: também zera o "fim", senão fica "pendurado"
    }

    delete antigaFrente;
    return valor;
}

void Queue::print() const {
    No* atual = frente;
    while (atual != nullptr) {
        cout << atual->valor << ' ';
        atual = atual->proximo;
    }
    cout << endl;
}

Queue::~Queue() {
    while (!isEmpty()) {
        dequeue();   // reaproveitando dequeue() pra liberar tudo
    }
}