// Bora aplicar uma tabela hash com colisões na prática e demonstrar o separate chaining
// Bora demonstrar a colisão no main

#include "C++Tab_hash.h"
#include <iostream>
using namespace std;

int main() {
    TabelaHash tabela(7);

    tabela.inserir(10);
    tabela.inserir(17);   // colide com o 10! (10 % 7 == 17 % 7 == 3)
    tabela.inserir(3);
    tabela.inserir(20);   // colide com o 3! (3 % 7 == 20 % 7 == 3)

    cout << "Tabela hash apos insercoes:" << endl;
    tabela.imprimir();

    cout << "\nBuscar 17: " << (tabela.buscar(17) ? "encontrado" : "nao encontrado") << endl;
    cout << "Buscar 99: " << (tabela.buscar(99) ? "encontrado" : "nao encontrado") << endl;

    tabela.remover(17);
    cout << "\nTabela apos remover 17:" << endl;
    tabela.imprimir();

    return 0;
}

// Depura e me diz qual foi a saída