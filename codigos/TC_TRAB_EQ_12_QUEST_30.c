#include <stdio.h>

int main() {
    float n1, n2;
    char operacao;

    // Solicita ao usuário para inserir dois números
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    
    printf("Escolha a operação (1 para soma, 2 para subtração, 3 para multiplicação, 4 para divisão): ");
    scanf(" %c", &operacao);

    
    switch (operacao) {
        case '1':
            printf("Resultado: %.2f\n", n1 + n2);
            break;
        case '2':
            printf("Resultado: %.2f\n", n1 - n2);
            break;
        case '3':
            printf("Resultado: %.2f\n", n1 * n2);
            break;
        case '4':
            if (n2 != 0) {
                printf("Resultado: %.2f\n", n1 / n2);
            } else {
                printf("Erro: Divisão por zero.\n");
            }
            break;
        default:
            printf("Operação inválida.\n");
            break;
    }

    return 0;
}
