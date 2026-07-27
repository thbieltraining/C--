// Operações mátemáticas básicas em C++
#include <iostream>
using namespace std;

int main() {
int number1;
int number2;

cout << "Digite o primeiro número: ";
cin >> number1;
cout << "Digite o segundo número: ";
cin  >> number2;

int sum  = number1 + number2;
int  sub = number1 - number2;
int mul = number1 * number2;
int div = number1 / number2;
float fdiv = (float)number1 / number2;
int res = number1 % number2;
cout << "O resultado da operação de soma é: " << sum << endl;
cout << "O resultado da operação de subtração é: " << sub << endl;
cout << "O resultado da operação de multiplicação é: " << mul << endl;
cout << "O resultado da operação de divisão é: " << div << endl;
cout << "O resultado da operação de divisão em ponto flutuante é: " << fdiv << endl;
cout << "O resultado da operação de resto é: " << res << endl;
// Vamos analisar antes de tudo o código acima. Ele é um programa simples que realiza operações matemáticas básicas (soma, subtração, multiplicação, divisão e resto) entre dois números fornecidos pelo usuário.
// Acredito que você rodou o código igual eu 
// Percebeu que a divisão inteira (div) não retorna o resultado esperado quando o primeiro número é menor que o segundo? Isso acontece porque a divisão inteira descarta a parte decimal do resultado. Por exemplo, se você digitar 3 e 5, a divisão inteira resultará em 0, enquanto a divisão em ponto flutuante (fdiv) retornará 0.6, que é o resultado correto da operação.
// Vamos testar com 0 e 1? 
// Deixo o output para você testar e ver o resultado.
return 0;
}
