  //Comandos de repetição em C++ agora
  // Operações de repetição básicas em C++
  #include <iostream>
  using namespace std;

  int main() {
  int total = 0;

  for (int  number = 2; number <= 10; number += 2) {
      total += number;
  }
  cout << "A soma dos números é: " << total << endl;

  return 0;
  }
