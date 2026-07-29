// Vetores são estruturas de dados que armazenam elementos do mesmo tipo em uma sequência contígua na memória. 
// Veja um exmeplo de aplicação de vetores em C++ com declarando um vetores de inteiros com 5 elementos e inicializando apenas os 3 primeiros elementos:

#include <iostream>
using namespace std;
int main () {
    // Declarando um vetor de inteiros com 5 elementos
    int numeros[5] = {12, 4, 5};
 return 0;
}
// Acima , declaramos um vetor de inteiros chamado "numeros" com 5 elementos.
// Só demos valores para os 3 primeiros elementos, os outros 2 elementos serão inicializados com o valor padrão do tipo int, que é 0.
// Teremos algo assim na memória: [12, 4, 5, 0, 0].

