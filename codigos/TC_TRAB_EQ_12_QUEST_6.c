#include<stdio.h>
/*
1- ler números OK
2- imprimir produto dos lidos OK
3- imprimir a soma dos quadrados OK
4- finalizar quando 0 OK
*/
int main(){
    int nums[100], prod=1, soma=0;
    
    printf("Digite os números a serem lidos. 0 para finalizar\n");
    for(int i=0; i<sizeof(nums)/sizeof(nums[0]); i++){
        scanf("%d", &nums[i]);
        if(nums[i]==0){
            printf("Zero digitado, encerrando leitura.\n");
            break;
        }
        prod*=nums[i];
        soma+=nums[i]*nums[i];
    }
    
    printf("O produto dos números lidos é: %d\n", prod);
    printf("A soma dos quadrados dos números lidos é: %d\n", soma);
    system("pause");
}