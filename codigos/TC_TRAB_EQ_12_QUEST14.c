#include <stdio.h>

int main() {
    int numero, menor = 0, somaMenor10 = 0, produtoMaior20 = 1;
    int primeiroNumero = 1; // Flag para identificar o primeiro número inserido

    while (1) {
        // Solicita entrada do usuário
        printf("Digite um numero inteiro (ou 0 para sair): ");
        scanf("%d", &numero);

        // Verifica se o número é nulo para encerrar o programa
        if (numero == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        // Atualiza o menor número se necessário
        if (primeiroNumero || numero < menor) {
            menor = numero;
            primeiroNumero = 0; // Desativa a flag após o primeiro número
        }

        // Determina a soma dos números menores que 10 e o produto dos maiores que 20
        if (numero < 10) {
            somaMenor10 += numero;
        } else if (numero > 20) {
            produtoMaior20 *= numero;
        }
    }

    // Imprime o menor número, a soma dos menores que 10 e o produto dos maiores que 20
    printf("O menor numero lido foi: %d\n", menor);
    printf("Soma dos numeros menores que 10: %d\n", somaMenor10);
    printf("Produto dos numeros maiores que 20: %d\n", produtoMaior20);

    return 0;
}
