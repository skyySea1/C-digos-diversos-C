#include <stdio.h>
#include <math.h>

/*
1- ler terno de numeros OK
2- calcular equação do 2º grau OK
    2.2 ax²+bx+c
        d=b²-4ac OK
        x=-b±Vd/2a OK
3- somar as raízes se forem iguais OK
4- finalizar quando o terno for nulo OK
5- informar a quantidade de raizes complexas OK
*/

int main(){
    int nums[3], contCompx=0, a, b, c, delta;
    float x1, x2, soma=0;

    printf("Digite 3 números sendo eles A, B e C respectivamente. Digite 0 para finalizar o programa.\n");
    for (int i = 0; i < 3; i++){
        scanf("%d", &nums[i]);
        if (nums[i]==0){
            printf("0 digitado, encerrando leitura.\n");
            break;
        }
        a=nums[0];
        b=nums[1];
        c=nums[2];
    }
    //delta
    delta = (b*b)-(4*a*c);
    if(delta<0){
        printf("Delta não pode ser menor que 0. %d\n", delta);
        return 0;
    }
    printf("================================\n");
    //equação
    x1=(-b)+(sqrt(delta))/2*a;
    x2=(-b)-(sqrt(delta))/2*a;
    if (x1<0.0){
        printf("x1 é um número complexo. %f\n", x1);
        contCompx++;
    }else if(x2<0.0){
        printf("x2 é um número complexo. %f\n", x2);
        contCompx++;
    }
    if (x1==x2){
        soma=x1+x2;
        printf("A soma de x1 e x2 é: %f\n", soma);
    }

    printf("================================\n");
    printf("Esta operação tem %d número(s) complexo(s)\n", contCompx);
    printf("Delta é: %d\n", delta);
    system("pause");
}