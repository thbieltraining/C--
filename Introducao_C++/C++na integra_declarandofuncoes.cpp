//Declarando funções em C++
#include <iostream>
using namespace std;


int sum (int number1, int number2) {
  return number1 + number2;
}

int sub (int number1, int number2) {
  return number1 - number2;
}

int mult (int number1, int number2) {
  return number1 * number2;
}

int idiv (int number1, int number2) {
  return number1 / number2;
}

int main() {
  return 0;
}

// Esse código acima é um programa simples que declara funções para realizar operações matemáticas básicas (soma, subtração, multiplicação e divisão) entre dois números fornecidos pelo usuário.
// Ele não executa nenhuma operação, mas as funções podem ser chamadas no futuro para realizar cálculos.
// Cada função recebe dois parâmetros (number1 e number2) e retorna o resultado da operação correspondente.
// Perceba a diferença de estrutura tomando o main como referência, que é a função principal do programa. 
// O main é o ponto de entrada do programa, enquanto as funções auxiliares são chamadas dentro do main ou em outras funções para realizar tarefas específicas.
    