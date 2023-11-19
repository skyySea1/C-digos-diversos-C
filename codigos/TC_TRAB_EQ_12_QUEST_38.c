#include <stdio.h>

int main(){
    int max, num, soma = 0;
    //tamanho da matriz tridimencional
    printf("tamanho do array tridimencional: ");
    scanf(" %d", &max);
    int arr[max][max][max];
    //for determinando números dos elementos da matriz
    for (int i = 0; i < max; i++){
        for (int j = 0; j < max; j++){
            for (int k = 0; k < max; k++){
                printf("Insira [%d][%d][%d]: ", i, j, k);
                scanf(" %d", &num);
                arr[i][j][k] = num;
            }
        }
    }
    //A) Impressão da diagonal principal
    printf("Diagonal principal:");
    for (int i = 0; i < max; i++){
        printf(" %d", arr[i][i][i]);
    }
    // B) Soma das arestas
    for (int i = 0; i < max; i++) {
        // horizontal
        soma += arr[0][0][i];
        soma += arr[0][max - 1][i];
        soma += arr[max - 1][0][i];
        soma += arr[max - 1][max - 1][i];
    }

    // vertical e profundidade
    for (int i = 1; i < max - 1; i++) {
        // vertical
        soma += arr[0][i][0];
        soma += arr[0][i][max - 1];
        soma += arr[max - 1][i][0];
        soma += arr[max - 1][i][max - 1];
        // profundidade
        soma += arr[i][0][0];
        soma += arr[i][0][max - 1];
        soma += arr[i][max - 1][0];
        soma += arr[i][max - 1][max - 1];
    }
    printf("\nSoma das arestas: %d", soma);
    return(0);
}