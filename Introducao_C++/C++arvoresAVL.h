// Bora aplicar uma AVL na prática agora

#ifndef CPPAVL_H
#define CPPAVL_H

struct No {
    int valor;
    No* esquerda;
    No* direita;
    int altura;
};

class ArvoreAVL {
private:
    No* raiz;

    int altura(No* no) const;
    int fatorBalanceamento(No* no) const;
    No* rotacaoDireita(No* y);
    No* rotacaoEsquerda(No* x);
    No* inserirRecursivo(No* no, int valor);
    void imprimirEmOrdemRecursivo(No* no) const;
    void destruirRecursivo(No* no);

public:
    ArvoreAVL();
    ~ArvoreAVL();
    void inserir(int valor);
    void imprimirEmOrdem() const;
};

#endif