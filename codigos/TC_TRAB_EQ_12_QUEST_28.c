#include <stdio.h>

float calcularMedia(float matriz[5][3]) {
    float soma = 0;
    int totalElementos = 5 * 3;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            soma += matriz[i][j];
        }
    }

    return soma / totalElementos;
}

void imprimirMatrizTransposta(float matriz[5][3]) {
    printf("\nMatriz Transposta:\n");
    for (int j = 0; j < 3; ++j) {
        for (int i = 0; i < 5; ++i) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void somarMediaMatriz(float matriz[5][3], float media) {
    printf("\nMatriz de cada elemento somado à média:\n");
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            matriz[i][j] += media;
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matriz[5][3];

    printf("Digite os valores para a matriz [5x3]:\n");
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    float media = calcularMedia(matriz);
    printf("A média dos elementos da matriz é: %.2f\n", media);

    imprimirMatrizTransposta(matriz);
    somarMediaMatriz(matriz, media);

    return 0;
}
