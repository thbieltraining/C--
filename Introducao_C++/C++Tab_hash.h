// Colisões na tabela Hash 

// Uma colisão acontece quando duas chaves diferentes geram a mesma posição na tabela hash.
// Para resolver colisões, podemos usar o encadeamento, armazenando vários elementos na mesma posição por meio de uma lista,
// ou o endereçamento aberto, procurando outra posição vazia.
// Muitas colisões podem deixar a tabela hash mais lenta.
// Por isso, é importante utilizar uma boa função hash.

// Bora aplicar uma tabela hash com colisões na prática e demonstrar o separate chaining

#ifndef CPPHASH_H
#define CPPHASH_H

struct No {
    int chave;
    No* proximo;
};

class TabelaHash {
private:
    No** tabela;   // um VETOR DE PONTEIROS — cada posição é o início de uma lista!
    int tamanho;

    int funcaoHash(int chave) const;

public:
    TabelaHash(int tamanho);
    ~TabelaHash();

    void inserir(int chave);
    bool buscar(int chave) const;
    void remover(int chave);
    void imprimir() const;
};

#endif