// Classe Time
// O que é uma classe Time em C++?
// Uma classe Time em C++ é uma estrutura que representa um horário do dia, geralmente composto por horas, minutos e segundos.
// Vamos criar uma classe Time em C++ que encapsula essas informações e fornece métodos para manipulação do tempo.

#include <cstdio>
using namespace std;
class Time {
private:  // Não  podem ver os atributos da classe, apenas os métodos públicos podem acessar os atributos privados da classe.
    int hours;   // Horas (0-23)
    int minutes; // Minutos (0-59)
    int seconds; // Segundos (0-59)
public: // Podem ver os atributos da classe, e podem acessar os atributos privados da classe.
    // Construtor padrão
    Time() : hours(0), minutes(0), seconds(0) {}

    // Construtor parametrizado
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
        normalizeTime();
    }

    // Método para normalizar o tempo (ajustar horas, minutos e segundos)
    void normalizeTime() {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }
        if (hours >= 24) {
            hours %= 24;
        }
    }

    // Métodos getters
    int getHours() const { return hours; }
    int getMinutes() const { return minutes; }
    int getSeconds() const { return seconds; }

    // Método para exibir o tempo no formato HH:MM:SS
    void displayTime() const {
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    }

    // Método para adicionar segundos ao tempo
    void addSeconds(int s) {
        seconds += s;
        normalizeTime();
    }

    // Método para adicionar minutos ao tempo
    void addMinutes(int m) {
        minutes += m;
        normalizeTime();
    }

    // Método para adicionar horas ao tempo
    void addHours(int h) {
        hours += h;
        normalizeTime();
    }
};

// O que é void? 
// Em C++, "void" é um tipo de retorno que indica que uma função não retorna nenhum valor.

// Ok, mas quando usar void?
// Você deve usar "void" quando a função não precisa retornar nenhum valor. Por exemplo,
void printTime() {
    Time t(10, 30, 45);
    t.displayTime(); // Exibe o tempo no formato HH:MM:SS
}

// Opa, to vendo um print, o que é print?
// Em C++, "print" não é uma função nativa da linguagem. No entanto, o termo "print" é comumente usado para se referir à ação de exibir informações na saída padrão (geralmente o console).
// Em C++, você pode usar a função "printf" da biblioteca <cstdio> ou o operador "<<" com "std::cout" da biblioteca <iostream> para imprimir informações na tela.

// Mas e esses printTime, o que é?
// "printTime" é uma função definida no código acima que cria um objeto da classe Time e chama o método "displayTime" para exibir o tempo no formato HH:MM:SS.  

// Eu vi o get, mas e o set, o que é?
// Em C++, "get" e "set" são métodos comumente usados em classes para acessar (get) e modificar (set) os valores dos atributos privados de um objeto.
