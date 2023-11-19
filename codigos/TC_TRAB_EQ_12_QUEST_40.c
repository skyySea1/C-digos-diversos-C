#include <stdio.h>

int main(){
    int matriz[3][3], num, soma = 0, temp = 2;
    //definindo matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Insira matriz[%d][%d]: ", i, j);
            scanf("%d", &num);
            matriz[i][j] = num;
        }
    }
    //impressão da diagonal sem a diagonal principal
    printf("Matriz 3x3 sem a diagonal principal:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (i == j){
                //não imprima elemento da diagonal principal
                printf("x  ");
            } else {
                printf("%d  ", matriz[i][j]);
            }
        }
        printf("\n");
    }
    //Soma da diagonal secundaria
    for(int i = 0; i < 3; i++){
        soma += matriz[i][temp];
        temp--;
    }
    printf("Soma da diagonal secundaria: %d", soma);
    return 0;
}