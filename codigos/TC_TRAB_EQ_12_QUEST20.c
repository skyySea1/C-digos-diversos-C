#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros = NULL;
    int tamanho = 0;
    int numero;

    printf("Digite uma sequência de números (0 para sair):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            if (tamanho == 0) {
                printf("Nenhum número foi digitado. Encerrando o programa.\n");
            } else {
                printf("Números em ordem inversa da leitura: ");
                for (int i = tamanho - 1; i >= 0; i--) {
                    printf("%d ", numeros[i]);
                }
                printf("\n");

                printf("Encerrando o programa.\n");
            }

            free(numeros);
            break;
        } else {
            tamanho++;
            numeros = (int *)realloc(numeros, tamanho * sizeof(int));

            if (numeros == NULL) {
                printf("Erro na alocação de memória. Encerrando o programa.\n");
                free(numeros);
                exit(1);
            }

            numeros[tamanho - 1] = numero;
        }
    }

    return 0;
}
