// Vamos falar de árvores 
// Árvores são estruturas de dados hierárquicas usadas para representar informações organizadas em níveis. 
// Elas são formadas por nós, sendo que o primeiro nó é chamado de raiz. 
// Cada nó pode possuir outros nós abaixo dele, chamados de filhos, e um nó sem filhos é chamado de folha.

// Em C++, árvores geralmente são implementadas usando struct ou class e ponteiros.
// Uma árvore binária, por exemplo, permite que cada nó tenha no máximo dois filhos: esquerdo e direito.

struct No {
    int valor;
    No* esquerdo;
    No* direito;
};

// Árvores são utilizadas em várias situações, como organização de arquivos, busca de dados, representação de expressões matemáticas e criação de árvores de decisão.
// Uma estrutura bastante conhecida é a árvore binária de busca, que mantém valores menores à esquerda e maiores à direita, facilitando a procura de elementos.

