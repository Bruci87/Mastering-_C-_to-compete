#include <iostream>
#include <vector>

// Simulando as variáveis globais que causaram o erro antes
int n = 4;
std::vector<int> tree = {0, 10, 5, 5, 1, 2, 3, 4}; 
// Posições no array 'tree':
// Índice:   0   1   2   3   4   5   6   7
// Valor:   [-] [10][5] [5] [1] [2] [3] [4]
// Elementos originais estão em tree[4] até tree[7] (1, 2, 3, 4)

int sum(int a, int b) {
    std::cout << "=== INÍCIO DA BUSCA DA SOMA ===" << std::endl;
    std::cout << "Buscando intervalo original: [" << a << ", " << b << "]" << std::endl;
    
    a += n; b += n;
    std::cout << "Convertido para os índices da árvore: a = " << a << ", b = " << b << "\n" << std::endl;
    
    int s = 0;
    int passo = 1;
    
    while (a <= b) {
        std::cout << "--- Passo " << passo++ << " ---" << std::endl;
        std::cout << "  Ponteiros atuais -> a: " << a << ", b: " << b << std::endl;
        
        // Verifica o limite esquerdo (a)
        if (a % 2 == 1) {
            std::cout << "  [a=" << a << " é ímpar!] Somando tree[" << a << "] (valor: " << tree[a] << ") e andando para a direita." << std::endl;
            s += tree[a++];
        } else {
            std::cout << "  [a=" << a << " é par] Apenas subindo para o pai no próximo nível." << std::endl;
        }
        
        // Verifica o limite direito (b)
        if (b % 2 == 0) {
            std::cout << "  [b=" << b << " é par!] Somando tree[" << b << "] (valor: " << tree[b] << ") e andando para a esquerda." << std::endl;
            s += tree[b--];
        } else {
            std::cout << "  [b=" << b << " é ímpar] Apenas subindo para o pai no próximo nível." << std::endl;
        }
        
        // Sobe um nível na árvore
        a /= 2; b /= 2;
        std::cout << "  Soma parcial atual: " << s << std::endl;
        std::cout << "  Subindo de nível (dividindo por 2) -> Novo a: " << a << ", Novo b: " << b << "\n" << std::endl;
    }
    
    std::cout << "=== FIM DA BUSCA ===" << std::endl;
    std::cout << "Resultado final da soma: " << s << "\n" << std::endl;
    return s;
}

int main() {
    // Exemplo: Somar do índice 0 até o índice 2 (valores: 1 + 2 + 3 = 6)
    sum(0, 2);
    return 0;
}