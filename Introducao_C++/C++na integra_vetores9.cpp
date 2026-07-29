// desalocando vetores dinamicamente 
// Vejamos um exemplo:

#include <iostream>
using namespace std;
int main() {
  int num_elem;
  cout << "Digite o tamanho do vetor: ";
  cin >> num_elem;

  int* vt = new int[num_elem];

  for (int i = 0; i < num_elem; i++) {
    vt[i] = 3*i;
  }
  for (int i = 0; i < num_elem; i++) {
    cout << "vt[" << i << "] = " << vt[i] << "\n";
  }
 
 delete [] vt; // Aqui nós excluímos os itens do nosso vetor, experimente rodar o código 
 vt= nullptr; //Esse nullptr surgiu para evitar usar o ponteiro já liberado por um acidente...  
 

  

return 0;
}









