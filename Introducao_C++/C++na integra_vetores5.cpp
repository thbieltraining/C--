// Vetores são estruturas de dados que armazenam elementos do mesmo tipo em uma sequência contígua na memória. 
// Veja um exmeplo de aplicação de vetores em C++ com declarando um vetor de inteiros com 8 elementos e os acessando com iteração e imprimindo todos eles:

#include <iostream>
using namespace std;
int main () {
    // Declarando um vetor de inteiros com 8 elementos
    int numeros[8] = {12, 4, 5,};
    // Acessando os elementos do vetor com iteração
    for (int i = 0; i < 8; i++) {
         cout << "numeros[" << i << "] = " << numeros[i] << "\n";
                                             // saída: numeros[7] = 40
                                            // Usei \n ao invés de endl para não forçar a limpeza do buffer de saída, o que pode ser mais eficiente em alguns casos.
    }
 return 0;
}
