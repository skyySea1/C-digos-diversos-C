#include <stdio.h>
//inclui o random
#include <stdlib.h>
//Utiliza pra pegar o tempo atual para definir uma seed (não pode ser usado para segurança)
#include <time.h>

int main(){
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);
    int vet[tamanho];
    for (int i = 0; i < tamanho; i++){
        vet[i] = -1;
    }
    srand(time(0));
    for (int i = 0; i < tamanho; i++){
        vet[i] = (rand() % tamanho);
        for (int j = 0; j < tamanho; j++){
            if (j == i){
                //nuh uh
            } else if (vet[i] == vet[j]){
                i--;
                break;
            } else {
                //nuh uh
            }
        }
    }
    for (int i = 0; i < tamanho; i++){
        printf("%d ",vet[i]);
    }
    return 0;
}