// Veja um exemplo de implementação de fila em C++ 

#include "C++filas.h"
#include <iostream>
using namespace std;

Queue::Queue(int lenght) {
    this->lenght = lenght;
    structure = new itemType[this->lenght];
    front = 0;
    rear = -1;
    count = 0;
}

Queue::~Queue() {
    delete[] structure;
}

bool Queue::isEmpty() const {
    return count == 0;  
}

bool Queue::isFull() const {
    return count == lenght;
}

void Queue::print() const {
    for (int i = 0; i < count; ++i) {
        int index = (front + i) % lenght;   // "circular", explico embaixo
        cout << structure[index] << ' ';
    }
    cout << endl;
}

void Queue::enqueue(itemType value) {
    if (!isFull()) {
        rear = (rear + 1) % lenght;
        structure[rear] = value;
        count++;
    }
}

itemType Queue::dequeue() {
    if (!isEmpty()) {
        itemType value = structure[front];
        front = (front + 1) % lenght;
        count--;
        return value;
    }
    return itemType();
}

// O que significa "circular" no contexto da fila?
// A implementação da fila é circular, o que significa que quando o índice do final (rear) atinge o final do array, ele volta para o início do array. Isso permite que a fila utilize eficientemente o espaço disponível no array, evitando desperdício de memória quando elementos são removidos da frente da fila.

// O que é a função "enqueue"?
// A função "enqueue" é responsável por adicionar um elemento ao final da fila. Ela verifica se a fila não está cheia antes de adicionar o elemento. Se houver espaço, ela incrementa o índice do final (rear) de forma circular e insere o novo valor na posição correspondente do array.

// O que é a função "dequeue"?
// A função "dequeue" é responsável por remover e retornar o elemento do início da fila. Ela verifica se a fila não está vazia antes de remover o elemento. Se houver elementos na fila, ela armazena o valor do início (front), incrementa o índice do início de forma circular e decrementa a contagem de elementos. Em seguida, retorna o valor removido.

// Uma fila é uma estrutura de dados que segue o princípio FIFO (First In, First Out), ou seja, o primeiro elemento inserido é o primeiro a ser removido. Ela é frequentemente implementada usando arrays ou listas encadeadas e é útil em diversas aplicações, como gerenciamento de tarefas, simulação de processos e algoritmos de busca.