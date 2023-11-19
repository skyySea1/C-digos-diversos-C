#include <stdio.h>

int main() {
    int numero, somaQuadrados = 0, produtoCubos = 1, somaTotal = 0, contador = 0;

    while (1) {
        // Solicita entrada do usuário
        printf("Digite um numero inteiro (ou 0 para sair): ");
        scanf("%d", &numero);

        // Verifica se o número é nulo para encerrar o programa
        if (numero == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        // Atualiza os cálculos estatísticos
        somaTotal += numero;
        somaQuadrados += numero * numero;
        produtoCubos *= numero * numero * numero;

        // Imprime números maiores que 200
        if (numero > 200) {
            printf("Numero maior que 200: %d\n", numero);
        }

        contador++;
    }

    // Calcula a média
    double media = (double)somaTotal / contador;

    // Imprime os resultados
    printf("Media dos numeros lidos: %.2f\n", media);
    printf("Soma dos quadrados: %d\n", somaQuadrados);
    printf("Produto dos cubos: %d\n", produtoCubos);

    return 0;
}