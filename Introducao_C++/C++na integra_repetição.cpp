//Comandos de repetição em C++ agora
// Operações de repetição básicas em C++
#include <iostream>
using namespace std;

int main() {
int number;
int counter = 0;
int amount = 0;

while (counter < 10) {

cout << "O valor do contador é: " << counter << endl;
cin >> number;

  if (number < 6) {
    amount ++; 
  }
  counter++;

}


return 0;
}
