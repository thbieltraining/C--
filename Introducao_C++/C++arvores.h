// Arquivo H de uma árvore 

#ifndef CPPARVORE_H
#define CPPARVORE_H

struct No {
    int valor;
    No* esquerda;
    No* direita;
};

class ArvoreBinaria {
private:
    No* raiz;

    No* inserirRecursivo(No* no, int valor);
    bool buscarRecursivo(No* no, int valor) const;
    void imprimirEmOrdemRecursivo(No* no) const;
    void destruirRecursivo(No* no);

public:
    ArvoreBinaria();
    ~ArvoreBinaria();

    void inserir(int valor);
    bool buscar(int valor) const;
    void imprimirEmOrdem() const;
};

#endif