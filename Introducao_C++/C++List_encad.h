// Vamos falar sobre listas encadeadas em C++! 
// Uma lista encadeada é uma estrutura de dados que consiste em uma sequência de elementos, onde cada elemento (ou nó) contém um valor e um ponteiro para o próximo nó na sequência. 
// Isso permite que a lista cresça e diminua dinamicamente, ao contrário de arrays, que têm tamanho fixo.

// Como isso ocorre na prática?
// Se C++ precisar de armazenar uma coleção de elementos, como números inteiros, ele pode usar uma lista encadeada para fazer isso.
// Cada nó da lista contém um valor inteiro e um ponteiro para o próximo nó. 
// Quando um novo elemento é adicionado à lista, um novo nó é criado e o ponteiro do último nó é atualizado para apontar para o novo nó.

// Vamos começar declarando a classe do nó da lista encadeada:

#ifndef CPPLIST_ENCAD_H
#define CPPLIST_ENCAD_H

struct No {
    int valor;
    No* proximo;
};

class ListaLigada {
private:
    No* inicio;   // ponteiro pro primeiro nó da lista

public:
    ListaLigada();               // construtor
    ~ListaLigada();                // destrutor (importantíssimo aqui!)

    void inserirNoInicio(int valor);
    void inserirNoFim(int valor);
    void remover(int valor);
    bool buscar(int valor) const;
    void imprimir() const;
    bool estaVazia() const;
};

#endif

