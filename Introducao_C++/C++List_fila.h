// Bora falar de filas com a aplicação de listas encadeadas em C++? 
// Claro! Filas são estruturas de dados que seguem o princípio FIFO (First In, First Out), ou seja, o primeiro elemento a entrar é o primeiro a sair. Uma maneira eficiente de implementar uma fila é utilizando listas encadeadas, onde cada elemento aponta para o próximo.
// Qual a particularidade de utilizar listas encadeadas para implementar filas? 
// A principal vantagem é que não há necessidade de definir um tamanho fixo para a fila, como acontece com arrays. 

// Isso significa que a fila pode crescer dinamicamente conforme elementos são adicionados, sem desperdiçar memória. 
// Além disso, operações de inserção e remoção podem ser realizadas em tempo constante O(1), desde que tenhamos ponteiros para o início e o fim da lista.

// Porém, diferente das pilhas, as filas pedem que tenhamos dois ponteiros: um para o início (front) e outro para o fim (rear) da fila. 
// Isso permite que possamos adicionar elementos no final da fila e remover elementos do início de forma eficiente.

// Vamos começar com o .h da classe novamente:

#ifndef CPPFILALISTA_H
#define CPPFILALISTA_H

using itemType = char;

struct No {
    itemType valor;
    No* proximo;
};

class Queue {
private:
    No* frente;   // ponteiro pro início (quem sai primeiro)
    No* fim;      // ponteiro pro final (onde entra o próximo)

public:
    Queue();
    ~Queue();

    bool isEmpty() const;
    void print() const;
    void enqueue(itemType value);
    itemType dequeue();
};

#endif