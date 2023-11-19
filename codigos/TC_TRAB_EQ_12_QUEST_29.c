#include <stdio.h>

int main() {
    char nome[20], endereco[30];
    int idade, telefone;

    printf("informe seu nome: ");
    scanf("%s", nome);
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Informe seu numero de contato: ");
    scanf("%d", &telefone);
    printf("Informe seu endereço: ");
    scanf("%s", endereco);

    printf("\nDADOS FORNECIDOS:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Telefone: %d\n", telefone);
    printf("Endereço: %s\n", endereco);

    return 0;
}