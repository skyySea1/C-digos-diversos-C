#include <stdio.h>

/*
1- ler números digitados - OK
1.1- deixar o loop do tamanho do array automaticamente - OK
2- finalizar quando for 0 - OK
3- imprimir soma dos números - OK
4- imprimir a quantidade de números - OK
*/

int main(){
    //criando as variáveis
    int nums[5], cont = 0, soma = 0, tam;

    printf("Digite os números a serem lidos, digite 0 para finalizar a leitura.\n");
    //loop para a leitura dos números
    for(int i=0; i<sizeof(nums)/sizeof(nums[0]); i++){
        scanf("%d", &nums[i]);
        if (nums[i]==0){
            printf("Leitura finalizada\n");
            break;
        }
        cont++;
        soma += nums[i];
    }
    printf("A soma dos números é: %d\n", soma);
    printf("A quantidade de números lidos foi: %d", cont);
    system("pause");
}