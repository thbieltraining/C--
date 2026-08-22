// Vamos falar de tabela hash
// O que é uma tabela hash?
// Uma tabela hash é uma estrutura de dados que armazena informações
// no formato de chave e valor. Ela utiliza uma função hash para transformar
// uma chave em uma posição dentro de uma tabela, facilitando o acesso aos dados.

// Por exemplo, podemos usar o nome de uma pessoa como chave e sua idade como valor.
// Em condições ideais, uma tabela hash permite inserir, buscar e remover dados
// de forma muito rápida, geralmente com complexidade média O(1).

int funcaoHash(int chave, int tamanhoTabela) {
    return chave % tamanhoTabela;   // a função hash mais simples possível
}