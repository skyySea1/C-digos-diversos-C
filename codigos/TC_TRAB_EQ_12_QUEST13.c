#include <stdio.h>

int main() {
    int numero, maior = 0;

    while (1) {
        // Solicita entrada do usuário
        printf("Digite um numero inteiro (ou 0 para sair): ");
        scanf("%d", &numero);

        // Verifica se o número é nulo para encerrar o programa
        if (numero == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        // Atualiza o maior número se necessário
        if (numero > maior) {
            maior = numero;
        }
    }

    // Imprime o maior número lido
    printf("O maior numero lido foi: %d\n", maior);

    return 0;
}
