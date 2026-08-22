// Bora aplicar uma tabela hash com colisões na prática e demonstrar o separate chaining

#include "C++Tab_hash.h"
#include <iostream>
using namespace std;

TabelaHash::TabelaHash(int tam) {
    tamanho = tam;
    tabela = new No*[tamanho];   // aloca um VETOR DE PONTEIROS

    for (int i = 0; i < tamanho; i++) {
        tabela[i] = nullptr;   // cada posição começa como lista vazia
    }
}

int TabelaHash::funcaoHash(int chave) const {
    return chave % tamanho;
}

void TabelaHash::inserir(int chave) {
    int indice = funcaoHash(chave);

    No* novo = new No;
    novo->chave = chave;
    novo->proximo = tabela[indice];   // insere no INÍCIO da lista daquela posição
    tabela[indice] = novo;
}

bool TabelaHash::buscar(int chave) const {
    int indice = funcaoHash(chave);

    No* atual = tabela[indice];
    while (atual != nullptr) {
        if (atual->chave == chave) {
            return true;
        }
        atual = atual->proximo;
    }
    return false;
}

void TabelaHash::remover(int chave) {
    int indice = funcaoHash(chave);
    No* atual = tabela[indice];
    No* anterior = nullptr;

    while (atual != nullptr && atual->chave != chave) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == nullptr) return;   // não encontrou

    if (anterior == nullptr) {
        tabela[indice] = atual->proximo;   // era o primeiro da lista
    } else {
        anterior->proximo = atual->proximo;
    }
    delete atual;
}

void TabelaHash::imprimir() const {
    for (int i = 0; i < tamanho; i++) {
        cout << "[" << i << "]: ";
        No* atual = tabela[i];
        while (atual != nullptr) {
            cout << atual->chave << " -> ";
            atual = atual->proximo;
        }
        cout << "nullptr" << endl;
    }
}

TabelaHash::~TabelaHash() {
    for (int i = 0; i < tamanho; i++) {
        No* atual = tabela[i];
        while (atual != nullptr) {
            No* proximo = atual->proximo;
            delete atual;
            atual = proximo;
        }
    }
    delete[] tabela;   // libera o vetor de ponteiros também!
}