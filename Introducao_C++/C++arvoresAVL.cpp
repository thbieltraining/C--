// Vamos falar de arvores AVL
// O que são arvores AVL? 
// Vamos fazer uma explicação bem detalhada> 
// Árvores AVL são árvores binárias de busca (ABB) que mantêm o balanceamento
// automático após inserções e remoções, para garantir que a altura da árvore
// fique em O(log n).

// Isso significa que a diferença de altura entre as subárvores esquerda e direita
// de qualquer nó nunca pode ser maior que 1.
//
// Elas foram criadas por Adelson-Velsky e Landis, por isso o nome AVL.

// Vantagens:
// - Busca eficiente;
// - Inserção e remoção com desempenho bom;
// - Menor risco de degeneração em comparação com árvores não balanceadas.

// Desvantagem:
// - Rebalanceamento constante exige rotações, aumentando a complexidade de
// implementação.

// Em resumo: AVL é uma árvore binária de busca balanceada, que mantém
// a estrutura eficiente para operações de busca, inserção e remoção.

/* arvore.inserir(10);
   arvore.inserir(20);
   arvore.inserir(30);
   arvore.inserir(40); */


//  10  \
      20   \
          30   \
                40
                

//  Isso não é mais uma árvore na prática — é uma lista ligada disfarçada! Buscar 40 agora exige passar por 10 → 20 → 30 → 40, ou seja, O(n), exatamente a mesma lentidão que árvores deveriam evitar.

// Assim surge AVL 

struct No {
    int valor;
    No* esquerda;
    No* direita;
    int altura;   // NOVO! precisa guardar a altura de cada nó
};

