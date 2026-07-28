// Vamos falar sobre ponteiros em C++. 
// Abaixo vamos ver como declarar ponteiros e como alocar memória dinamicamente para eles usando o operador new.
#include <iostream>

using namespace std;
 int main() {
 bool*truth = new bool;
 *truth = true; // Atribuindo valor ao ponteiro
 float*money = new float;
 *money = 100.0; // Atribuindo valor ao ponteiro
 float*myMONEY = new float; // Ponteiro vazio usando NULL
 // Não atribuindo valor ao ponteiro, ele permanece vazio, mas ainda assim é um ponteiro válido que pode ser usado para alocação dinâmica de memória posteriormente.
 // Provavelmente se você tentar acessar o valor de myMONEY sem atribuir um valor a ele, você pode obter um valor aleatório ou um comportamento indefinido, pois o ponteiro não aponta para um endereço de memória válido.
    delete truth;
    delete money;
    delete myMONEY;

// O delete é usado para desalocar a memória alocada dinamicamente para os ponteiros. É importante desalocar a memória quando não for mais necessária para evitar vazamentos de memória.

  return 0;

}