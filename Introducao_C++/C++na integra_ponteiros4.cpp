// Vamos falar sobre ponteiros em C++. New e Delete são operadores utilizados para alocar e desalocar memória dinamicamente.
//Vamos para o Delete agora. 
// O operador delete é usado para desalocar memória alocada dinamicamente.
#include <iostream>

using namespace std;
int main() {
    
    int* intPtr;
    intPtr = new int; // Alocando memória para um inteiro e armazenando o endereço em intPtr 
    delete intPtr; // Desalocando a memória alocada


    return 0;
}

//Note que foi necessário alocar memória para o ponteiro antes de desalocá-la. Se você tentar desalocar um ponteiro que não aponta para memória alocada dinamicamente, isso pode causar comportamento indefinido.
