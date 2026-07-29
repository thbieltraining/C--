// Alocando vetores dinamicamente 
// Vejamos um exemplo:

#include <iostream>
using namespace std;
int main() {
  int num_elem;
  cout << "Digite o tamanho do vetor: ";
  cin >> num_elem;

  int* vt = new int[num_elem];

  for (int i = 0; i < num_elem; i++) {
    vt[i] = 2*i;
  }
  for (int i = 0; i < num_elem; i++) {
    cout << "vt[" << i << "] = " << vt[i] << "\n";

 
  }
  

return 0;
}









