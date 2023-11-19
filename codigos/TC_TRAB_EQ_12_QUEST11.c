#include <stdio.h>

int main() {
    int numero;

    while (1) {
        // Solicita entrada do usuário
        printf("Digite um numero inteiro (ou 0 para sair): ");
        scanf("%d", &numero);

        // Verifica se o número é nulo para encerrar o programa
        if (numero == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        // Verifica se o bit menos significativo é 1 para determinar se é ímpar
        if (numero & 1) {
            printf("%d é ímpar.\n", numero);
        } else {
            printf("%d é par.\n", numero);
        }
    }

    return 0;
}
