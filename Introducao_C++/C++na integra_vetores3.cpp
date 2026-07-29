// Vetores são estruturas de dados que armazenam elementos do mesmo tipo em uma sequência contígua na memória. 
// Veja um exmeplo de aplicação de vetores em C++ com declarando um vetor de inteiros com 8 elementos e os acessando com iteração:

#include <iostream>
using namespace std;
int main () {
    // Declarando um vetor de inteiros com 8 elementos
    int numeros[8] = {12, 4, 5,};
    // Acessando os elementos do vetor com iteração
    for (int i = 0; i < 8; i++) {
        cout << "Elemento na posição " << i << ": " << numeros[i] << endl;
        cin >> numeros[i];
    }
 return 0;
}
// Acima , declaramos um vetor de inteiros chamado "numeros" com 8 elementos.
// Só demos valores para os 3 elementos, os outros elementos serão inicializados com o valor padrão do tipo int, que é 0.
// Teremos algo assim na memória: [12, 4, 5, 0, 0, 0, 0, 0].

// Se você é iniciante igual eu provavlemente não entendeu o porquê do "cin >> numeros[i];" no código acima, então vou explicar.
// O "cin" é usado para receber entradas do usuário no console.
// O operador ">>" é usado para direcionar a entrada do usuário para a variável especificada, que neste caso é "numeros[i]".
// O "numeros[i]" refere-se ao elemento do vetor "numeros" na posição "i".
// Então, o "cin >> numeros[i];" significa que o programa vai esperar o usuário digitar um valor no console, e esse valor será armazenado no elemento do vetor "numeros" na posição "i".

// Porém temos cin depois de cout, então o programa vai imprimir o valor do elemento do vetor na posição "i" e depois vai esperar o usuário digitar um valor no console, e esse valor será armazenado no elemento do vetor "numeros" na posição "i".
// Resultado do RUN = 12. 