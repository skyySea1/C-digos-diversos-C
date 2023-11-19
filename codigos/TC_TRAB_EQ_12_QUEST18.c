#include <stdio.h>
#include <math.h>
#include <locale.h>
//define os tipos que serão usados, o tipo double foi escolhido por abranger valores maiores, levando em consideração que o resultado pode ser um dízima

int main() {
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
printf("Olá, Vicente");
    int n = 6;
    int i = 1;
    int k = 3;
    double somatorio = 0;

    for (i = 1; i <= n; i++) {
        
        for (k = 3; k <= 7; k++) {
            double expressao = (pow(2, 3 * i + k) / (i * k + 1)) * k;
            somatorio += expressao;
        }
       
    }

    printf("O resultado da expressão fornecida é: %lf\n", somatorio); 
    // %lf = long float = double = float com maior valor
     printf("Pressione Enter para fazer cafuné em uma capivara");
    getchar();


    return 0;
}