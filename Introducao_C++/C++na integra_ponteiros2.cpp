// Vamos falar sobre ponteiros em C++. Um ponteiro é uma variável que armazena o endereço de memória de outra variável. Eles são muito úteis para manipular dados de forma eficiente e para trabalhar com alocação dinâmica de memória.
#include <iostream>

using namespace std;
int main() {
    int  alpha;
    int* intPtr;

    intPtr = &alpha; // intPtr agora armazena o endereço de alpha   
}

// Note que não temos um cout, logo ao rodar o programa não teremos nenhuma saída. No entanto, se você quiser ver o valor armazenado no ponteiro, você pode adicionar um cout para exibir o endereço de memória armazenado em intPtr.
