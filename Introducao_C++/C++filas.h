//Filas em C++ 
// são estruturas de dados que seguem o princípio FIFO (First In, First Out), ou seja, o primeiro elemento inserido é o primeiro a ser removido. Elas são frequentemente implementadas usando arrays ou listas encadeadas e são úteis em diversas aplicações, como gerenciamento de tarefas, simulação de processos e algoritmos de busca.
// A principal diferença entre filas em Python e C++ está na forma como são implementadas e utilizadas, bem como nas características da linguagem em si.

#ifndef CPPFILAS_H
#define CPPFILAS_H

using itemType = char;

class Queue {
private:
    int lenght;
    itemType* structure;
    int front;   // aponta pro INÍCIO da fila (quem sai primeiro)
    int rear;    // aponta pro FINAL da fila (onde entra o próximo)
    int count;   // quantidade atual de elementos
public:
    Queue(int size);
    ~Queue();
    bool isEmpty() const;
    bool isFull() const;
    void print() const;
    void enqueue(itemType value);   // "entrar na fila" (equivalente ao push)
    itemType dequeue();               // "sair da fila" (equivalente ao pop)
};

#endif