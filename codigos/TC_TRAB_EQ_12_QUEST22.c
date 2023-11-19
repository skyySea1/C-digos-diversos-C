#include <stdio.h>
#include <string.h>

int main(){
    char resposta[4]; // Increase the size to accommodate the null terminator

    printf("Seja bem-vindo à calculadora de somas e médias, Vicente!\n");
    printf("Gostaria de tomar um café enquanto espera a compilação? (Digite 'sim' ou 'não'): ");

    scanf("%3s", resposta); // Increase the size to read up to 3 characters

    // Verifica a resposta
    if (strcmp(resposta, "sim"))
    { 
        printf("Ótimo! Aproveite o seu café!\n");
    }
    else if (strcmp(resposta, "não"))
    { 
        printf("Tudo bem! Viva as capivaras!\n");
    }
    else
    {
        printf("Resposta inválida. Continuando sem café.\n");
    }

    int numeros[] = {1, 2, 3, 4, 5}; // array de numeros
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int soma = 0;

    printf("Sequência de números: ");

    // Imprime a sequência e calcula a soma
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", numeros[i]);
        soma += numeros[i];
    }

    // Calcula a média
    double media = (double)soma / tamanho;

    printf("\nSoma de cada número com a sua respectiva média:\n");

    // Imprime a soma de cada número com a média
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d + %.2lf = %.2lf\n", numeros[i], media, numeros[i] + media);
    }

    printf("Viva as capivaras!\n");

    return 0;
    }