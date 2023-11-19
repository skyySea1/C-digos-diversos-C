#include <stdio.h>
//inclui o fgets(), um scanf que considera espaços, e tambem inclui o getchar(), um scanf que vai salvar um caractere em um char
#include <string.h>
int main(){
    char frase[100], letra;
    int tamanho, quantidade = 0;
    printf("Digite a frase (max de 100 letras): ");
    fgets(frase, 100, stdin);
    tamanho = strlen(frase);
    printf("Caractere a procurar na frase: ");
    letra = getchar();
    for (int i = 0; i < tamanho; i++){
        if (frase[i] == letra){
            quantidade++;
        }
    }
    printf("Quantidade de vezes que o caractere (%c) aparece na frase: %d", letra, quantidade);
    return(0);
}