// main de uma fila agora: 

#include "C++filas.h"
#include <iostream>
using namespace std;

int main() {
    Queue fila(5);

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

    return 0;
}

// Fila é literalmente uma FILA, parece uma fila de pessoas, o primeiro a entrar é o primeiro a sair.
// Podemos ver isso em exemplos computacionais também, tipo fila de impressão da impressora, ou fila de processos do sistema operacional, ou fila de atendimento em um banco.
