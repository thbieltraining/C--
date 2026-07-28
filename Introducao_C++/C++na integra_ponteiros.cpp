// Vamos falar sobre ponteiros em C++. Um ponteiro é uma variável que armazena o endereço de memória de outra variável. Eles são muito úteis para manipular dados de forma eficiente e para trabalhar com alocação dinâmica de memória.
#include <iostream>

using namespace std;
int main() {

;

    int var = 42; // Declarando uma variável inteira
    int* ptr = &var; // Declarando um ponteiro que armazena o endereço de 'var'

    // Exibindo o valor da variável e o valor apontado pelo ponteiro
    cout << "Valor da variável: " << var << endl;
    cout << "Valor do ponteiro (endereço de memória): " << ptr << endl;
    cout << "Valor apontado pelo ponteiro: " << *ptr << endl;

    // Modificando o valor da variável através do ponteiro
    *ptr = 100;
    cout << "Novo valor da variável após modificação via ponteiro: " << var << endl;

    return 0; 
}
