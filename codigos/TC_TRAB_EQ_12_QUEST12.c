#include <stdio.h>

int main() {
    int numero, somaPares = 0, produtoImpares = 1, somaTotal = 0;

    while (1) {
        // Solicita entrada do usuário
        printf("Digite um numero inteiro (ou 0 para sair): ");
        scanf("%d", &numero);

        // Verifica se o número é nulo para encerrar o programa
        if (numero == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        // Atualiza a soma total
        somaTotal += numero;

        // Verifica se o número é par ou ímpar
        if (numero % 2 == 0) {
            // Número par
            somaPares += numero;
        } else {
            // Número ímpar
            produtoImpares *= numero;
        }
    }

    // Imprime os resultados
    printf("Soma dos números pares: %d\n", somaPares);
    printf("Produto dos números ímpares: %d\n", produtoImpares);
    printf("Soma total de todos os números lidos: %d\n", somaTotal);

    return 0;
}
