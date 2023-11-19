#include <stdio.h>

/*
1- ler sequência de números OK
2- finalizar quando for 0 ou 14 ou 99 OK
3- somar os numeros entre 50 e 150 OK
4- multiplicar os diferentes de 10 e entre 5 e 70 OK
5- média dos numeros lidos OK
6- multiplicar os numeros entre 20 e 30 OK
7- somar o quadrado dos maiores que 16 (x²) OK
*/

int main(){
    int nums[100], cont=0, soma=0, somaGeral=0, mult=1, prod20a30=1, somaQuad=0;
    float media=0;
    printf("Digite os numeros, digite 0 ou 14 ou 99 para finalizar a leitura.\n");
    
    //leitura dos números
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++){
        scanf("%d", &nums[i]);
        if (nums[i]==0){
            printf("0 digitado, leitura encerrada\n");
            break;
        }else if(nums[i]==14){
            printf("14 digitado, leitura encerrada\n");
            break;
        }else if(nums[i]==99){
            printf("99 digitado, leitura encerrada\n");
            break;
        }
        cont++;
        if (nums[i]>50 && nums[i]<150){
            soma += nums[i];
        }
        if (nums[i]!=10&&nums[i]>5&&nums[i]<70){
            mult *= nums[i];
        }
        //média
        somaGeral+=nums[i];
        media = somaGeral/cont;
        if (nums[i]>20&&nums[i]<30){
            prod20a30 *= nums[i];
        }
        if (nums[i]>16){
            somaQuad += nums[i]*nums[i];
        }
    }

    printf("================================\n");
    printf("Resultado da soma dos números entre 50 e 150: %d \n", soma);
    printf("Resultado da média dos números : %f \n", media);
    printf("Resultado da multiplicação dos números diferentes de 10 e entre 5 e 70: %d \n", mult);
    if (prod20a30==1){
        printf("Nenhum número entre 20 e 30 foi inserido\n");
    }else{
        printf("Resultado da multiplicação dos números entre 20 e 30: %d \n", prod20a30);
    }
    printf("Resultado da soma do quadrado dos números maiores que 16: %d \n", somaQuad);
    system("pause"); 
}