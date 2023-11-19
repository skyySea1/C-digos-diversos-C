#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int num, mult;

    printf(" Eis aqui a gloriosa Tabuada de 1 a 9:\n\n");

    
    for (num = 1; num <= 9; num++) {
        // Loop para calcular e imprimir o resultado da multiplicação
        for (mult = 1; mult <= 10; mult++) {
            
            printf("%2d x %2d = %2d\t", num, mult, num * mult);
          
            // linha em cada resultado 
            printf("\n");
        }
        printf("------------\n"); //linha para separar as tabelas
    }

    return 0;
}
