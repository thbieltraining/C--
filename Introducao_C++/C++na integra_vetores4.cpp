// Vetores são estruturas de dados que armazenam elementos do mesmo tipo em uma sequência contígua na memória. 
// Veja um exmeplo de aplicação de vetores em C++ com declarando um vetor de inteiros com 8 elementos e os acessando com iteração:

#include <iostream>
using namespace std;
int main () {
    // Declarando um vetor de inteiros com 8 elementos
    int numeros[8] = {12, 4, 5,};
    // Acessando os elementos do vetor com iteração
    for (int i = 0; i < 8; i++) {
        cin >> numeros[i];
        cout << "Elemento na posição " << i << ": " << numeros[i] << endl;
       // Lembra do caso do cin no código passado? Então, invertemos a ordem agora
// Se você é curioso igual eu provavelmente quer saber o que acontece se invertermos a ordem do cin e cout, então vamos ver o que acontece, roda seu programa e veja o que acontece, depois me conta nos comentários se você entendeu o que aconteceu. 
    }
 return 0;
}
// Eai, pela primeira vez vimos aqui um cin antes de um cout, e provavelmente você não entendeu o que aconteceu, então vamos explicar.
// O "cin" é usado para receber entradas do usuário no console.
// O operador ">>" é usado para direcionar a entrada do usuário para a variável especificada, que neste caso é "numeros[i]".
// O "numeros[i]" refere-se ao elemento do vetor "numeros" na posição "i".
// Então, o "cin >> numeros[i];" significa que o programa vai esperar o usuário digitar um valor no console, e esse valor será armazenado no elemento do vetor "numeros" na posição "i".
// Porém temos cin antes de cout, então o programa vai esperar o usuário digitar um valor 
// no console, e esse valor será armazenado no elemento do vetor "numeros" na posição "i", e depois vai imprimir o valor do elemento do vetor na posição "i".

// Você deve ter achado estranho o terminal todo preto, experimenta jogar um cout para pergunta com o parâmetro em i tip isso: 
// cout << "Digite o valor da posição " << i << ": ";

// Dica, digite uma letra ao invés de um número e se surprenda
