#include <stdio.h>

void ArrayInvert(int array[], int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio < fim) {
        // Troca os elementos no início e no fim do array
        int temp = array[inicio];
        array[inicio] = array[fim];
        array[fim] = temp;

        // Move os índices para dentro do array
        inicio++;
        fim--;
    }
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    printf(" Oi, Vicente. tudo bem contigo?\n");
    printf("\nSequência na ordem decresente:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d,", numeros[i]);
    }

    // ativa função para inverter o array
    ArrayInvert(numeros, tamanho);

    printf("\n Sequência na ordem crescente:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d,", numeros[i]);
    }

    return 0;
}