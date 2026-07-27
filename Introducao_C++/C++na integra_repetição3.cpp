//Comandos de repetição em C++ agora
// Operações de repetição básicas em C++
#include <iostream>
using namespace std;

int main() {
int count = 0;
int number;
int sum = 0;

do { 
  cout << "Digite um número inteiro: ";
  cin >> number;
   
  sum += number;
  count++;
  } while (number != 0);

  float average = (float)sum / (float)(count-1);
  cout << "A média dos números digitados é: " << average << endl;
 



return 0;
}
