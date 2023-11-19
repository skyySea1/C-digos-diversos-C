#include <stdio.h>

int main() {
    int num, A1diag = 0, A2diag = 0, B1diag = 0, B2diag = 0, jb1 = 4, jb2 = 4, A[5][5], B[5][5], soma[5][5], C[5][5];

    // Leitura de duas matrizes 5x5
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Insira A[%d][%d]: ", i, j);
            scanf("%d", &num);
            A[i][j] = num;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Insira B[%d][%d]: ", i, j); // Corrigido aqui
            scanf("%d", &num);
            B[i][j] = num;
        }
    }

    // A) Soma das duas matrizes
    printf("Soma:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            soma[i][j] = A[i][j] + B[i][j];
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    // B) Soma das diagonais de cada matriz
    for (int i = 0; i < 5; i++) {
        A1diag = A1diag + A[i][i];
    }

    for (int i = 0; i < 5; i++) {
        A2diag = A2diag + A[i][jb1];
        jb1--;
    }
    printf("Soma das diagonais A: %d\n", A1diag + A2diag);

    for (int i = 0; i < 5; i++) {
        B1diag = B1diag + B[i][i];
    }

    for (int i = 0; i < 5; i++) {
        B2diag = B2diag + B[i][jb2];
        jb2--;
    }
    printf("Soma das diagonais B: %d\n", B1diag + B2diag);

    // C) Multiplicação das duas matrizes
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            C[i][j] = 0; // Inicialize para zero antes de somar
            for (int k = 0; k < 5; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // Exibir matriz multiplicada
    printf("Multiplicação:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return(0);
}