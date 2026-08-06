// Como usar as classes geradas? 
// Bora implementar então a classe que geramos posterioremente, e ver como podemos utilizá-la em um programa C++.

#include <iostream>
#include "C++classes.h"

using namespace std;

int main() {

Time t1(23,59,59); // Cria um objeto Time com hora 23, minuto 59 e segundo 59
t1.print(); // Imprime a hora atual: 23:59:59
t1.setHour(12); // Altera a hora para 12  
t1.setMinute(30); // Altera o minuto para 30
t1.setSecond(45); // Altera o segundo para 45   

t1.print(); // Imprime a hora atual: 12:30:45
cout << "Hora: " << t1.getHour() << endl; // Imprime a hora atual: 12
cout << "Minuto: " << t1.getMinute() << endl; // Imprime o minuto atual: 30
cout << "Segundo: " << t1.getSecond() << endl; // Imprime o segundo atual: 45

Time t2 (23);  // Cria um objeto Time com hora 23, minuto 0 e segundo 0
t2.print(); // Imprime a hora atual: 23:00:00

Time t3 (23, 59, 58); // Cria um objeto Time com hora 23, minuto 59 e segundo 58
t3.print(); // Imprime a hora atual: 23:59:58
t3.nextSecond(); // Adiciona um segundo ao objeto t3, resultando em 23:59:59
t3.print(); // Imprime a hora atual: 23:59:59
t3.nextSecond(); // Adiciona um segundo ao objeto t3, resultando em 00:00:00
t3.print(); // Imprime a hora atual: 00:00:00


return 0;
}