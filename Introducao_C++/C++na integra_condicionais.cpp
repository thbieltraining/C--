// Bora ver com operações condicionais agora?
// Operações com condicionais em C++
#include <iostream>
using namespace std;

int main() {
int number1;
int number2;

cout << "Digite o primeiro número: ";
cin >> number1;
cout << "Digite o segundo número: ";
cin  >> number2;

if (number1== number2)
 cout << number1 << "==" << number2 << endl;

 if (number1!= number2)
 cout << number1 << "!=" << number2 << endl;

 if (number1> number2)
 cout << number1 << ">" << number2 << endl;

 if (number1< number2)
 cout << number1 << "<" << number2 << endl;
 
 // Esse código acima é um programa simples que realiza operações condicionais básicas (igualdade, diferença, maior e menor) entre dois números fornecidos pelo usuário.
 // Note que ao rodar o código, ele irá imprimir na tela apenas as operações que forem verdadeiras.
 

return 0;
}

