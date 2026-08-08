// Implementando agora 

#include "C++List_fila.h"
#include <iostream>
using namespace std;

int main() {
    Queue fila;

    fila.enqueue('A');
    fila.enqueue('B');
    fila.enqueue('C');

    cout << "Fila atual: ";
    fila.print();

    cout << "Dequeue: " << fila.dequeue() << endl;
    cout << "Dequeue: " << fila.dequeue() << endl;

    cout << "Fila depois dos dequeues: ";
    fila.print();

    fila.enqueue('D');
    fila.enqueue('E');

    cout << "Fila depois de mais enqueues: ";
    fila.print();

    // Testando esvaziar completamente e reabastecer (testa o caso do "fim = nullptr")
    fila.dequeue();
    fila.dequeue();
    fila.dequeue();   // agora deve ficar vazia
    cout << "Fila vazia, tentando dequeue: ";
    fila.dequeue();

    fila.enqueue('X');   // testando se reconstrói certinho depois de vazia
    cout << "Fila apos reabastecer: ";
    fila.print();

    return 0;
}