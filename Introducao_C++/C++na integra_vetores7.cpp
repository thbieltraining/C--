// Vetores são estruturas de dados que armazenam elementos do mesmo tipo em uma sequência contígua na memória. 
// Veja um exmeplo de aplicação de vetores em C++ com declarando um vetor de inteiros com 10 elementos, sendo iniciados por laços de repetição e imprimindo todos eles, declarando uma var como constante no processo:

#include <iostream>
using namespace std;
const int NUM_INT = 10;
int main () {
    // Declarando um vetor de inteiros com 10 elementos
    int numeros [NUM_INT];
    // Inicializando os elementos do vetor com laço de repetição
    for (int i = 0; i < 10; i++) { // Aqui eu poderia colcoar o NUM_INT novamente sem problema algum, teste na sua máquina
        numeros[i] = i *2;
    }
    for (int i = 0; i < NUM_INT; i++) {
         cout << "numeros[" << i << "] = " << numeros[i] << "\n";   // saída: numeros[7] = 40
    // Usei \n ao invés de endl para não forçar a limpeza do buffer de saída, o que pode ser mais eficiente em alguns casos.
    }

 return 0;
}

// Note que a lista foi até o elemento de número 10, que habitualmente não existe no loop
// Mesmo assim se você rodar esse código provavelmente terá um valor impresso. 
// Isso acontece porquê C++ não irá impedir você de acessar esse arquivo, porém ele pode ser "QUALQUER COISA" e pode até mesmo quebrar um programa... LEGAL NÉ??? 

   
    