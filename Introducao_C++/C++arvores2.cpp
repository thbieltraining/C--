// CPP paraa aplicação de uma árvore

#include "C++arvores.h"
#include <iostream>
using namespace std;

ArvoreBinaria::ArvoreBinaria() {
    raiz = nullptr;
}

// --- INSERIR (usando recursão) ---
No* ArvoreBinaria::inserirRecursivo(No* no, int valor) {
    if (no == nullptr) {
        // achou o "buraco" certo: cria o novo nó aqui
        No* novo = new No;
        novo->valor = valor;
        novo->esquerda = nullptr;
        novo->direita = nullptr;
        return novo;
// Aqui temos uma  função que chama a si mesma, nessa lógica, criamos um ponteiro pendurado para o nó atual, capaz de chamar  a si mesm, o caso base uxilia na tomada de decisão para saber se ao percorrer a lista onde está vazioe se é esquerda ou direita que passará pela reconstrução. 
    }

    if (valor < no->valor) {
        no->esquerda = inserirRecursivo(no->esquerda, valor);   // desce pra esquerda
    } else if (valor > no->valor) {
        no->direita = inserirRecursivo(no->direita, valor);     // desce pra direita
    }
    // se valor == no->valor, já existe, não faz nada (sem duplicatas)

    return no;
}

void ArvoreBinaria::inserir(int valor) {
    raiz = inserirRecursivo(raiz, valor);
}

// --- BUSCAR (usando recursão) ---
bool ArvoreBinaria::buscarRecursivo(No* no, int valor) const {
    if (no == nullptr) {
        return false;   // chegou num "buraco", não achou
    }
    if (valor == no->valor) {
        return true;    // achou!
    }
    if (valor < no->valor) {
        return buscarRecursivo(no->esquerda, valor);
    }
    return buscarRecursivo(no->direita, valor);
}

bool ArvoreBinaria::buscar(int valor) const {
    return buscarRecursivo(raiz, valor);
}

// --- IMPRIMIR EM ORDEM (in-order traversal) ---
void ArvoreBinaria::imprimirEmOrdemRecursivo(No* no) const {
    if (no == nullptr) return;

    imprimirEmOrdemRecursivo(no->esquerda);   // 1º: tudo da esquerda
    cout << no->valor << " ";                   // 2º: o próprio nó
    imprimirEmOrdemRecursivo(no->direita);    // 3º: tudo da direita
}

void ArvoreBinaria::imprimirEmOrdem() const {
    imprimirEmOrdemRecursivo(raiz);
    cout << endl;
}

// --- DESTRUTOR ---
void ArvoreBinaria::destruirRecursivo(No* no) {
    if (no == nullptr) return;
    destruirRecursivo(no->esquerda);
    destruirRecursivo(no->direita);
    delete no;
}

ArvoreBinaria::~ArvoreBinaria() {
    destruirRecursivo(raiz);
}