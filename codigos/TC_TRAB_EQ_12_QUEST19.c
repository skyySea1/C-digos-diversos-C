#include <stdio.h>
#include <math.h> //bilioteca de operações matemáticas
#include <locale.h>
//define os tipos que serão usados, o tipo double foi escolhido por abranger valores maiores, levando em consideração que o resultado pode ser um dízima

int main() {
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
printf("Olá, Vicente\n");
    int n = 4;
    int j = 1;
    int i = 1;
    int k = 3;

    double somatorio = 0;
//loops aninhados para calcular expressões com 3 somatórios
    for (j = 1, pow(2,j = 2); j <= n; j++, pow(2,j *= 2)) {
        for (i = 1; i <= 6; i++) {
            for (k = 3; k <= 7; k++) {
                double denominador = i * k + 1;
                double expressao = pow(2,j * i + k) / denominador * k * pow(j, i);
                somatorio += expressao;
            }
        }
    }

    printf("O resultado da expressão fornecida é: %lf\n", somatorio);

    return 0;
}
