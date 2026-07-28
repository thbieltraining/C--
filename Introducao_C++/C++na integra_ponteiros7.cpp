// Vamos falar sobre ponteiros em C++. 
// Cuidados com os ponteiros
#include <iostream>
using namespace std;
 int main() {
 int* money = new int;
 *money = 100;
 int* myMONEY = new int; // 1
 *myMONEY = *money;
  myMONEY = money; // 2 

 // E agora??

    return 0;
}
// Acabamos de deixar de ter dois ponteiros apontando para endereços de memória diferentes, e agora temos dois ponteiros apontando para o mesmo endereço de memória.
// Isso significa que se alterarmos o valor de *money, o valor de *myMONEY também será alterado, pois ambos estão apontando para o mesmo endereço de memória.
// Além disso, o endereço de memória alocado para myMONEY na linha 1 não foi desalocado, o que significa que agora temos um vazamento de memória.
// Basicamente criamos dois bugs 

// Isso poderia ser evitado se tivéssemos desalocado a memória alocada para myMONEY com delete myMONEY; antes de fazer a atribuição myMONEY = money; na linha 2.
// Seria algo tipo> delete myMONEY; // desalocando a memória alocada para myMONEY. myMONEY = money;
// agora myMONEY aponta para o mesmo endereço de memória que money.