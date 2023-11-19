#include <stdio.h>
#include <math.h>

/*
1- ler números
2- informar se é primo ou não
3- finalizar quando for 0
4- indicar a quantidade de primos lidos
*/

int main(){
    int num, sePrimo=0, contPrimo=0;

    printf("Digite os números para saber se são primos. 0 para finalizar.\n");
    for (int i = 0; i < 100; i++){
        scanf("%d", &num);
        if (num==0){
            printf("0 digitado, encerrando leitura\n");
            printf("Foram lidos %d números primos.\n", contPrimo);
            return 0;
        }
        for (int i = 2; i <= num/2; i++){
            if (num%i==0){
                sePrimo++;
                break;
            }else{
                contPrimo++;
            }
        }
        if (sePrimo==0){
            printf("É primo.\n");
        }else{
            printf("Não é primo.\n");
        }
    }
    system("pause");
}