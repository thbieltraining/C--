// Classes em C++ são estruturas que permitem a criação de objetos,
// encapsulando dados e funções relacionadas. Elas são fundamentais para a programação orientada a objetos (POO) e permitem a modelagem de entidades do mundo real em código.
// Qual a diferença entre classes python e classes C++?
// A principal diferença entre classes em Python e C++ está na forma como são definidas e utilizadas, bem como nas características da linguagem em si.

// Algumas diferenças incluem:
// 1. Sintaxe: A sintaxe para definir classes em Python é mais simples e direta, enquanto em C++ é mais detalhada e requer a declaração de tipos de dados.
// #Define usamos isso para definir constantes e macros, enquanto em Python usamos variáveis e funções.
// #infdef usam-se para evitar múltiplas inclusões de arquivos de cabeçalho, enquanto em Python não há necessidade disso devido à forma como os módulos são importados.~
// #endif são usados para fechar a diretiva de pré-processamento iniciada com #ifdef ou #ifndef, enquanto em Python não há necessidade disso.
// 2. Tipagem: C++ é uma linguagem de tipagem estática, o que significa que os tipos de dados devem ser declarados explicitamente, enquanto Python é uma linguagem de tipagem dinâmica, permitindo maior flexibilidade.
// 3. Herança: C++ suporta herança múltipla, permitindo que uma classe derive de várias classes base, enquanto Python também suporta herança múltipla, mas a sintaxe e o comportamento podem diferir.


// Exemplo de classe em C++:
#include <iostream>
using namespace std;

class Exemplo {
private:
    int valor;
public:
    Exemplo(int v) : valor(v) {}
    int getValor() {
        return valor;
    }
};

// get e set são métodos usados para acessar e modificar os atributos privados de uma classe. 
// O método get retorna o valor do atributo, enquanto o método set permite definir um novo valor para o atributo. 
// Eles são importantes para encapsular os dados e garantir que sejam acessados e modificados de maneira controlada.
