#include <stdio.h>
#include <math.h> //biblioteca que adiciona as funções pow, exp e sin
#include <locale.h>

//define os tipos que serão usados, o tipo double foi escolhido por abranger valores maiores, levando em consideração que o resultado pode ser um dízima
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
printf("Olá, Vicente");
    int n = 6;
    int i = 1;
    double somatorio = 0;
//  n=6 da parte de cima  adiciona valores ao i=1 (entenda o I=1 como uma espécie de ponto de partida e 6 o fina(


//laço for start point  i=1 (ponto de partida do somatório) a a end point i<= n (n no caso será 6, como já definimos antes) e o incremento no loop, pra adicionar valores a variável i

    for (i = 1; i <= n; i++) {
        double expressao = (pow(i, 2*i) + exp(i) * sin(2 * i));
        somatorio += expressao; // += é o mesmo que Somatório= somatório + expressão
    }
// A função pow é da  math.h, faz potenciação/exponenciacao chama ela, adiciona o número, depois a potência no argumento e voí lá.
//A exp realiza o cálculo desse número "e" que é o número de Euler (a lib reconhece isso e dispõe de uma função própria pra isso), então basta adiciona o argumento em parênteses com o número que ele será elevado.
//Depois, sin chama  a função seno (que multiplica com o exp) onde você só atribui o valor que ela tá multiplicando, no caso 2i

    printf("\nO resultado da expressão é: %lf\n", somatorio); // %lf = long floar = double = float com maior valor
     printf("Pressione Enter para comprar a Inglaterra");
    getchar();
    return 0;
}
