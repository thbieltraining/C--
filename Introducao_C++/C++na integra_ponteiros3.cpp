// Vamos falar sobre ponteiros em C++. New e Delete são operadores utilizados para alocar e desalocar memória dinamicamente.
//Vamos começar com o New. 
// O operador new é usado para alocar memória para uma variável ou objeto em tempo de execução.
// Ele retorna um ponteiro para o endereço de memória alocado. Por exemplo, se quisermos alocar memória para um inteiro, podemos fazer o seguinte: 
#include <iostream>

using namespace std;
int main() {
    
    int* intPtr;
    intPtr = new int; // Alocando memória para um inteiro e armazenando o endereço em intPtr 

    return 0;
}

