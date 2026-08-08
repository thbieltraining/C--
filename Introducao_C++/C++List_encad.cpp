// Aplicando e declarando as funções agora

#include "C++List_encad.h"
#include <iostream>
using namespace std;

// Construtor: lista começa vazia
ListaLigada::ListaLigada() {
    inicio = nullptr;
}

bool ListaLigada::estaVazia() const {
    return inicio == nullptr;
}

// Inserir no INÍCIO — o mais simples e mais rápido (O(1))
void ListaLigada::inserirNoInicio(int valor) {
    No* novo = new No;
    novo->valor = valor;
    novo->proximo = inicio;   // o novo nó aponta pro que ERA o início
    inicio = novo;              // o novo nó VIRA o início
}

// Inserir no FIM — precisa "andar" até o último nó (O(n))
void ListaLigada::inserirNoFim(int valor) {
    No* novo = new No;
    novo->valor = valor;
    novo->proximo = nullptr;

    if (estaVazia()) {
        inicio = novo;   // se a lista tá vazia, o novo nó já é o início
        return;
    }

    No* atual = inicio;
    while (atual->proximo != nullptr) {   // anda até o ÚLTIMO nó
        atual = atual->proximo;
    }
    atual->proximo = novo;   // o último nó passa a apontar pro novo
}

// Buscar um valor na lista
bool ListaLigada::buscar(int valor) const {
    No* atual = inicio;
    while (atual != nullptr) {
        if (atual->valor == valor) {
            return true;
        }
        atual = atual->proximo;
    }
    return false;
}

// Remover um valor específico
void ListaLigada::remover(int valor) {
    if (estaVazia()) return;

    // Caso especial: remover o PRIMEIRO nó
    if (inicio->valor == valor) {
        No* antigoInicio = inicio;
        inicio = inicio->proximo;
        delete antigoInicio;
        return;
    }

    // Caso geral: procurar o nó ANTERIOR ao que queremos remover
    No* atual = inicio;
    while (atual->proximo != nullptr && atual->proximo->valor != valor) {
        atual = atual->proximo;
    }

    if (atual->proximo != nullptr) {   // achou o valor
        No* noParaRemover = atual->proximo;
        atual->proximo = noParaRemover->proximo;   // "pula" o nó removido
        delete noParaRemover;
    }
}

void ListaLigada::imprimir() const {
    No* atual = inicio;
    while (atual != nullptr) {
        cout << atual->valor << " -> ";
        atual = atual->proximo;
    }
    cout << "nullptr" << endl;
}

// Destrutor: libera TODOS os nós, um por um, pra não vazar memória
ListaLigada::~ListaLigada() {
    No* atual = inicio;
    while (atual != nullptr) {
        No* proximo = atual->proximo;   // guarda o próximo ANTES de deletar
        delete atual;
        atual = proximo;
    }
}

// O que é o nullptr?
// nullptr é um literal que representa um ponteiro nulo em C++. Ele é usado para indicar que um ponteiro não aponta para nenhum objeto válido. Antes do C++11, o valor nulo era representado por 0 ou NULL, mas nullptr foi introduzido para fornecer uma maneira mais clara e segura de representar ponteiros nulos, evitando ambiguidades com inteiros.

//O que é o operador "->"?
// O operador "->" é usado em C++ para acessar membros (atributos ou métodos) de um objeto através de um ponteiro. Ele é uma forma conveniente de desreferenciar o ponteiro e acessar os membros do objeto apontado. Por exemplo, se você tem um ponteiro para um objeto chamado "ptr", você pode acessar um membro chamado "membro" usando "ptr->membro".  

// E por fim, o que ta acontecendo nessa lista? 
// A lista ligada é uma estrutura de dados que consiste em nós (ou elementos) que contêm um valor e um ponteiro para o próximo nó na sequência.
// Cada nó é dinamicamente alocado na memória, permitindo que a lista cresça ou diminua conforme necessário. 
// A lista começa com um ponteiro chamado "inicio" que aponta para o primeiro nó da lista. 
// Se a lista estiver vazia, "inicio" será nullptr. As operações implementadas incluem inserção no início e no fim da lista, busca de valores, remoção de valores específicos, impressão da lista e destruição da lista para liberar memória.