#include <stdio.h>
#include <math.h>

int ehPrimo(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int array[] = {2, 4, 35, 50, 23, 17, 9, 12, 27, 5, 14, 2, 3, 4, 1, 2, 5, 6, 8, 9};
    int tamanho = sizeof(array) / sizeof(array[0]);

    int maior = array[0];
    for (int i = 1; i < tamanho; ++i) {
        if (array[i] > maior) {
            maior = array[i];
        }
    }
    printf("1) Maior valor: %d\n", maior);

   
    int soma = 0;
    for (int i = 0; i < tamanho; ++i) {
        soma += array[i];
    }
    float media = (float)soma / tamanho;
    printf("2) Média dos valores: %.2f\n", media);

    
    printf("3) Subconjunto de valores primos: ");
    for (int i = 0; i < tamanho; ++i) {
        if (ehPrimo(array[i])) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    int somaPonderada = 0;
    for (int i = 0; i < tamanho; ++i) {
        somaPonderada += array[i] * i;
    }
    float mediaPonderada = (float)somaPonderada / soma;
    printf("4) Média ponderada considerando o endereço como peso: %.2f\n", mediaPonderada);

  
    printf("5) Normalização dos elementos pelo maior número: ");
    for (int i = 0; i < tamanho; ++i) {
        float normalizado = (float)array[i] / maior;
        printf("%.2f ", normalizado);
    }
    printf("\n");

    return 0;
}
