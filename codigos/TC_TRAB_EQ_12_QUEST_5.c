#include <stdio.h>

/*
1- ler números OK
2- imprimir a soma dos entre 2 e 100 e diferentes de 10, 20 e 32 OK
3- imprimir o produto dos entre 2 e 100 e diferentes de 10, 20 e 32 OK
4- finalizar quando for 0 OK
5- imprimir o produto de todos os numeros lidos OK
*/

int main(){
    int nums[100], soma=0, prod=1, prodGeral=1;

    printf("Digite os números, 0 para finalizar a leitura\n");
    for (int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++){
        scanf("%d", &nums[i]);
        if (nums[i]==0){
            printf("Número 0 digitado, leitura finalizada\n");
            break;
        }
        if (nums[i]>2&&nums[i<100]&&nums[i]!=10&&nums[i]!=20&&nums[i]!=32){
            soma+=nums[i];
            prod*=nums[i];
        }
        prodGeral*=nums[i];
    }
    printf("O produto de todos os números lidos é: %d\n", prodGeral);
    printf("A soma de todos os números lidos entre 2 e 100 e diferentes de 10, 20 e 32 é: %d\n", soma);
    system("pause");
}