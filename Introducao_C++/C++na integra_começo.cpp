// O que vimos anteriormente fo só o miolo de um programa em C++. Abaixo está um exemplo completo de um programa que declara variáveis de diferentes tipos e as imprime na tela.
#include <iostream>
using namespace std;

int main() {
    int idade = 20;
    double altura = 1.75;
    char letra = 'A';

    cout << "Idade: " << idade << "\n";
    cout << "Altura: " << altura << "\n";
    cout << "Letra: " << letra << "\n";

    return 0;
}
// notemos que o programa começa com a inclusão da biblioteca iostream, que permite a entrada e saída de dados. Em seguida, declaramos três variáveis: idade (do tipo int), altura (do tipo double) e letra (do tipo char). Por fim, usamos cout para imprimir os valores dessas variáveis na tela.