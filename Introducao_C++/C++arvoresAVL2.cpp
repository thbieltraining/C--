#include "C++arvoresAVL.h"
#include <iostream>
#include <algorithm>
using namespace std;

ArvoreAVL::ArvoreAVL() {
    raiz = nullptr;
}

int ArvoreAVL::altura(No* no) const {
    if (no == nullptr) return 0;
    return no->altura;
}

int ArvoreAVL::fatorBalanceamento(No* no) const {
    if (no == nullptr) return 0;
    return altura(no->esquerda) - altura(no->direita);
}

// --- Rotação à direita ---
No* ArvoreAVL::rotacaoDireita(No* y) {
    No* x = y->esquerda;
    No* T2 = x->direita;

    // realiza a rotação
    x->direita = y;
    y->esquerda = T2;

    // atualiza alturas (ORDEM IMPORTA: y primeiro, depois x)
    y->altura = 1 + max(altura(y->esquerda), altura(y->direita));
    x->altura = 1 + max(altura(x->esquerda), altura(x->direita));

    return x;   // x é a nova "raiz" desse pedaço da árvore
}

// --- Rotação à esquerda ---
No* ArvoreAVL::rotacaoEsquerda(No* x) {
    No* y = x->direita;
    No* T2 = y->esquerda;

    y->esquerda = x;
    x->direita = T2;

    x->altura = 1 + max(altura(x->esquerda), altura(x->direita));
    y->altura = 1 + max(altura(y->esquerda), altura(y->direita));

    return y;
}

// --- Inserir, com balanceamento automático ---
No* ArvoreAVL::inserirRecursivo(No* no, int valor) {
    // 1. Inserção normal de BST
    if (no == nullptr) {
        No* novo = new No;
        novo->valor = valor;
        novo->esquerda = nullptr;
        novo->direita = nullptr;
        novo->altura = 1;
        return novo;
    }

    if (valor < no->valor) {
        no->esquerda = inserirRecursivo(no->esquerda, valor);
    } else if (valor > no->valor) {
        no->direita = inserirRecursivo(no->direita, valor);
    } else {
        return no;   // valor duplicado, não insere
    }

    // 2. Atualiza a altura DESSE nó (no caminho de volta da recursão)
    no->altura = 1 + max(altura(no->esquerda), altura(no->direita));

    // 3. Calcula o fator de balanceamento
    int fb = fatorBalanceamento(no);

    // 4. Se desequilibrou, identifica o caso e rotaciona

    // Caso Esquerda-Esquerda
    if (fb > 1 && valor < no->esquerda->valor) {
        return rotacaoDireita(no);
    }

    // Caso Direita-Direita
    if (fb < -1 && valor > no->direita->valor) {
        return rotacaoEsquerda(no);
    }

    // Caso Esquerda-Direita (rotação DUPLA)
    if (fb > 1 && valor > no->esquerda->valor) {
        no->esquerda = rotacaoEsquerda(no->esquerda);
        return rotacaoDireita(no);
    }

    // Caso Direita-Esquerda (rotação DUPLA)
    if (fb < -1 && valor < no->direita->valor) {
        no->direita = rotacaoDireita(no->direita);
        return rotacaoEsquerda(no);
    }

    return no;   // já estava equilibrado, não faz nada
}

void ArvoreAVL::inserir(int valor) {
    raiz = inserirRecursivo(raiz, valor);
}

void ArvoreAVL::imprimirEmOrdemRecursivo(No* no) const {
    if (no == nullptr) return;
    imprimirEmOrdemRecursivo(no->esquerda);
    cout << no->valor << "(h" << no->altura << ") ";
    imprimirEmOrdemRecursivo(no->direita);
}

void ArvoreAVL::imprimirEmOrdem() const {
    imprimirEmOrdemRecursivo(raiz);
    cout << endl;
}

void ArvoreAVL::destruirRecursivo(No* no) {
    if (no == nullptr) return;
    destruirRecursivo(no->esquerda);
    destruirRecursivo(no->direita);
    delete no;
}

ArvoreAVL::~ArvoreAVL() {
    destruirRecursivo(raiz);
}