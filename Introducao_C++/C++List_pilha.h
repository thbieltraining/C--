// Vamos  falar de pilhas + listas encadeadas? 
// Antes tinhamos um limite de tamanho, mas agora podemos ter uma pilha de tamanho ilimitado, pois ela é implementada com listas encadeadas.

// Vamos  começar com o .h, que é o arquivo de cabeçalho onde vamos declarar a nossa classe Pilha.

#ifndef CPPPILHALISTA_H
#define CPPPILHALISTA_H

using itemType = char;

struct No {
    itemType valor;
    No* proximo;
};

class Stack {
private:
    No* topo;   // ponteiro pro nó do topo (em vez de vetor + índice!)

public:
    Stack();                  // construtor
    ~Stack();                  // destrutor (libera todos os nós)

    bool isEmpty() const;
    void print() const;
    void push(itemType value);
    itemType pop();
};

#endif