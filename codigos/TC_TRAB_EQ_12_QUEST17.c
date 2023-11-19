#include <stdio.h>
#include <math.h> //biblioteca de expressões matemáticas
#include <locale.h>
//define os tipos que serão usados, o tipo double foi escolhido por abranger valores maiores, levando em consideração que o resultado pode ser um dízima

int main() {
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
printf("Olá, Vicente");
    int n = 9;
    int i= 1;
    double somatorio = 0;
// loop que executa o somatório
    for (i = 1; i <= n; i++) {
        double expressao = (pow(2, 3*i+ pow(i, 2))) / (i + 1);
        somatorio += expressao;
    }

    printf("O resultado da expressão é: %lf\n", somatorio);
// %lf = long float = double = float com maior valor

    return 0;
}