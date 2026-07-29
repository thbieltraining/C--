// Vetores são estruturas de dados que armazenam elementos do mesmo tipo em uma sequência contígua na memória. 
// Veja um exmeplo de aplicação de vetores em C++ com declarando um vetor de inteiros com 10 elementos, sendo iniciados por laços de repetição e imprimindo todos eles:

#include <iostream>
using namespace std;
int main () {
    // Declarando um vetor de inteiros com 10 elementos
    int numeros[10];
    // Inicializando os elementos do vetor com laço de repetição
    for (int i = 0; i < 10; i++) {
        numeros[i] = i * 10;
    }
    for (int i = 0; i < 11; i++) {
         cout << "numeros[" << i << "] = " << numeros[i] << "\n";   // saída: numeros[7] = 40
    // Usei \n ao invés de endl para não forçar a limpeza do buffer de saída, o que pode ser mais eficiente em alguns casos.
    }

 return 0;
}

// Note que a lista foi até o elemento de número 10, que habitualmente não existe no loop
// Mesmo assim se você rodar esse código provavelmente terá um valor impresso. 
// Isso acontece porquê C++ não irá impedir você de acessar esse arquivo, porém ele pode ser "QUALQUER COISA" e pode até mesmo quebrar um programa... LEGAL NÉ??? 

   
    