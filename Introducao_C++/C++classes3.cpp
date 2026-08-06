// Criando classes com include guards em C++
// As include guards são uma técnica usada em C++ para evitar múltiplas inclusões de um mesmo arquivo de cabeçalho (header file) durante a compilação. 
// Elas ajudam a prevenir erros de redefinição de classes, funções ou variáveis quando um arquivo é incluído várias vezes em diferentes partes do código.
// Vamos usar o arquivo "C++classes.h" como exemplo para demonstrar como criar uma classe com include guards.

#include <iostream>
#include "C++classes.h"

using namespace std;
int Time::getHour() const {
    return hour;
}
int Time::getMinute() const {
    return minute;
}
int Time::getSecond() const {
    return second;
}

// o que é o :: ?
// É o operador de resolução de escopo (::) é usado para acessar membros (como funções ou variáveis) de uma classe, namespace ou enumeração.

// O que é o const no final da função?
// O const no final da função indica que a função não modifica o estado do objeto.

// Bora para os setters agora

void Time::setHour(int hour) {
    this->hour = hour;
}
void Time::setMinute(int minute) {
    this->minute = minute;
}   
void Time::setSecond(int second) {
    this->second = second;
}

void Time::print() const {
    cout << hour << ":" << minute << ":" << second << std::endl;
}
 void Time::nextSecond() {
        if (second >= 60) {
            minute += second / 60;
            second %= 60;
        }
        if (minute >= 60) {
            hour += minute / 60;
            minute %= 60;
        }
        if (hour >= 24) {
            hour %= 24;
        }
    }   