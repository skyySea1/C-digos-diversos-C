#include <stdio.h>
#include <math.h>
/*
1- ler termo de números para equação do 2° grau OK
1.1- resolução equação 2° grau OK
    ax²+bx+c
    d=b²-4ac OK
    x=-b±Vd/2a OK
2- somar raízes da equação quando maiores que 5 e menores que 10 OK
3- produto quando menores que 2 OK
4- finalizar quando nulo OK
5- informar a quantidade de raízes em cada operação OK
6- quantidade de raízes complexas OK
*/
int main(){
    // DELTA
    int nums[3], contComplexo=0;
    printf("Digite 3 números diferentes de 0, sendo A, B e C respectivamente. Digite 0 para finalizar\n");
    for (int i = 0; i < 3; i++){
        scanf("%d", &nums[i]);
    }
    int a = nums[0];
    int b = nums[1];
    int c = nums[2];
    int d = pow(b, 2) - 4*a*c;
    if (d>0.0){
        printf("Delta é %d \n", d);
    } else {
        printf("Raízes nulas\n");
        return 0;
    }
    printf("================================\n");
    
    //EQUAÇÃO
    float x1, x2;
    x1 = ((-b) + sqrt(d)) / (2*a);
    x2 = ((-b) - sqrt(d)) / (2*a);
    printf("Os valores de x1 e x2 são, respectivamente: %f %f\n", x1, x2);
    if (x1<0.0){
        printf("x1 é uma raíz complexa, %f\n", x1);
        contComplexo++;
    } else if (x2<0.0){
        printf("x2 é uma raíz complexa, %f\n", x2);
        contComplexo++;
    }
    
    printf("================================\n");
    //OPERAÇÕES REQUERIDAS
    int contSoma=0, contMult=0;
    float somaRaizes=0, multRaizes=0;
    
    //PARA X1
    if(x1>5 && x1<10 || x2>5 && x2<10){
        somaRaizes = x1+x2;
        contSoma++;
        printf("x1 e/ou x2 entre 5 e 10, o resultado foi: %f\n", somaRaizes);
    }
    if (x1<2 || x2<2){
        multRaizes = x1*x2;
        contMult++;
        printf("x1 e/ou x2 menor(es) que 2, o resultado foi: %f\n", multRaizes);
    }
    
    printf("================================\n");
    printf("%d raíz(es) complexa(s)\n", contComplexo);
    printf("%d raíz(es) entre 5 e 10\n", contSoma);
    printf("%d raíz(es) menor(es) que 2\n", contMult);
    system("pause");
}
