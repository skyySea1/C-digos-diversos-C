#include <stdio.h>

int main() {
    int value1, value2;
    char operate;

    printf("Digite um valor:");
    scanf("%d", &value1);

    // a função while realiza a limpeza de buffer para evitar conflitos
    //ao ler dados de tipos de caracteres e inteiro misturados a função getchar evita que o compilador intérprete o botão de enter como carácter nova linha deixado pela leitura anterior (value1)
 //   while (getchar() != '\n');

    printf("\nDigite um operador:");
    scanf("%c", &operate);

    printf("\nDigite o segundo valor:");
    scanf("%d", &value2);

    printf("%d %c %d", value1, operate, value2);

    return 0;
}
