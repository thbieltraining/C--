// Vamo falar de Page Rank? 

#include <iostream>  
#include <vector>    // Biblioteca para uso de vetores dinâmicos (::vector)
#include <cmath>     // Biblioteca para funções matemáticas (::abs para valor absoluto)
#include <iomanip>   // Biblioteca para formatação de saída (::setprecision)
using namespace std;

// Função que calcula o PageRank de um grafo direcionado
// Parâmetros:
// - graph: Grafo representado por uma lista de adjacência (matriz de vetores)
// - d: Fator de amortecimento (damping factor), padrão é 0.85
// - maxIterations: Limite máximo de iterações do algoritmo (evita loop infinito)
// - tol: Tolerância de erro/convergência (se a mudança for menor que isso, o algoritmo para)
void computePageRank(const ::vector<::vector<int>>& graph, double d = 0.85, int maxIterations = 100, double tol = 1e-6) {
    
    // Obtém o número total de páginas (nós) no grafo
    int N = graph.size();

    // Inicializa o vetor de PageRank onde cada página começa com a probabilidade igual a 1/N
    ::vector<double> pr(N, 1.0 / N);

    // Vetor para armazenar a quantidade de links de saída (out-degree) de cada página
    ::vector<int> outDegree(N, 0);

    // Lista de adjacência invertida: incoming[i] guarda todas as páginas que APONTAM para a página 'i'
    ::vector<::vector<int>> incoming(N);

    // --- FASE DE MAPEAMENTO DO GRAFO ---
    // Percorre cada nó 'u' do grafo original
    for (int u = 0; u < N; ++u) {
        // O número de elementos em graph[u] é a quantidade de links que saem do nó 'u'
        outDegree[u] = graph[u].size();

        // Para cada nó 'v' apontado por 'u':
        for (int v : graph[u]) {
            // Adiciona 'u' na lista de entradas do nó 'v' (significa que 'u' envia link para 'v')
            incoming[v].push_back(u);
        }
    }

    // --- FASE ITERATIVA DO PAGERANK ---
    // Executa o cálculo iterativo até atingir o número máximo de iterações ou a convergência
    for (int iter = 0; iter < maxIterations; ++iter) {
        
        // Vetor temporário para armazenar os novos valores de PageRank calculados nesta iteração
        ::vector<double> newPr(N, 0.0);

        // Variável para acumular a diferença total de valores entre a iteração anterior e a atual
        double diff = 0.0;

        // Processa o novo valor de PageRank para cada página 'i'
        for (int i = 0; i < N; ++i) {
            
            // Variável para somar a contribuição de todas as páginas que apontam para 'i'
            double rankSum = 0.0;

            // Percorre todas as páginas que possuem link para a página 'i'
            for (int incomingNode : incoming[i]) {
                
                // Garante que a página emissora possui ao menos 1 link de saída (evita divisão por zero)
                if (outDegree[incomingNode] > 0) {
                    // Divide o PageRank da página emissora pelo total de links de saída dela
                    rankSum += pr[incomingNode] / outDegree[incomingNode];
                }
            }

            // Aplica a fórmula clássica do PageRank: PR = (1 - d)/N + d * sum(PR_emissor / OutDegree_emissor)
            newPr[i] = (1.0 - d) / N + d * rankSum;

            // Calcula a diferença absoluta entre o valor novo e o valor antigo para verificar estabilização
            diff += ::abs(newPr[i] - pr[i]);
        }

        // Atualiza os valores do vetor oficial com os novos valores calculados
        pr = newPr;

        // VERIFICAÇÃO DE PARADA ANTECIPADA:
        // Se a soma das alterações em todos os nós for menor que a tolerância estipulada,
        // o algoritmo convergiu e os valores não vão mais mudar significativamente.
        if (diff < tol) {
            break;
        }
    }

    // --- FASE DE IMPRESSÃO DOS RESULTADOS ---
    // Imprime no console o valor final do PageRank de cada página formatado com 6 casas decimais
    for (int i = 0; i < N; ++i) {
        ::cout << "Página " << i << ": " << ::fixed << ::setprecision(6) << pr[i] << "\n";
    }
}

// --- FUNÇÃO PRINCIPAL (Ponto de Entrada do Programa) ---
int main() {
    // Definição do grafo de testes em uma lista de adjacência:
    // Índice 0 (Página 0) aponta para as páginas 1 e 2
    // Índice 1 (Página 1) aponta para a página 2
    // Índice 2 (Página 2) aponta para a página 0
    // Índice 3 (Página 3) aponta para a página 2
    ::vector<::vector<int>> graph = {
        {1, 2}, // Conexões de saída da Página 0
        {2},    // Conexões de saída da Página 1
        {0},    // Conexões de saída da Página 2
        {2}     // Conexões de saída da Página 3
    };

    // Chama a função de cálculo do PageRank passando o grafo montado
    computePageRank(graph);

    // Retorna 0 para indicar que o programa finalizou com sucesso
    return 0;
}

// Bem extenso, mas é um bom exemplo de como implementar o algoritmo PageRank em C++ usando conceitos de grafos e programação orientada a objetos.
// Compile e execute este código para ver os valores de PageRank calculados para cada página do grafo definido no seu pc 
// E esse cod marca o final desta etapa em c++ voltamos no último bimestre desse semestre para maiiiisssss, vlww 