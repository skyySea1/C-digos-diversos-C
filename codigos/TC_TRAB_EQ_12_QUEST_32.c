
#include <stdio.h>

int main() {
    int num, pares[50], impares[50];
    int qtdPares = 0, qtdImpares = 0;

    printf("Insira números inteiros positivos (para encerrar, digite um valor negativo):\n");

    do {
        printf("Insira um número: ");
        scanf("%d", &num);

        if (num >= 0) {
            if (num % 2 == 0) {
                pares[qtdPares++] = num;
            } else {
                impares[qtdImpares++] = num;
            }
        }
    } while (num >= 0);

    printf("\nNúmeros pares: ");
    for (int i = 0; i < qtdPares; ++i) {
        printf("%d ", pares[i]);
    }

    printf("\nNúmeros ímpares: ");
    for (int i = 0; i < qtdImpares; ++i) {
        printf("%d ", impares[i]);
    }

    return 0;
}
