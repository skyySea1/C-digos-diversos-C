
#include <stdio.h>

int main() {
    float totalGasto, valorPrestacao;
    int opcaoPagamento, numeroParcelas;

    
    printf("Digite o total de gastos: R$ ");
    scanf("%f", &totalGasto);

    printf("\nOpções de Pagamento:\n");
    printf("1. À vista com 10%% de desconto\n");
    printf("2. Em duas vezes (preço da etiqueta)\n");
    printf("3. De 3 a 10 vezes com juros de 3%% ao mês (para compras acima de R$ 100,00)\n");

   
    printf("\nEscolha a opção de pagamento (1 a 3): ");
    scanf("%d", &opcaoPagamento);

    
    switch (opcaoPagamento) {
        case 1:
            valorPrestacao = totalGasto * 0.9; 
            break;
        case 2:
            valorPrestacao = totalGasto / 2; 
            break;
        case 3:
            if (totalGasto > 100.00) {
                printf("Digite o número de parcelas (3 a 10): ");
                scanf("%d", &numeroParcelas);

                if (numeroParcelas >= 3 && numeroParcelas <= 10) {
                    valorPrestacao = totalGasto * 1.03 / numeroParcelas; 
                } else {
                    printf("Número de parcelas inválido. Deve ser de 3 a 10.\n");
                    return 1; 
                }
            } else {
                printf("Opção de parcelamento com juros disponível apenas para compras acima de R$ 100,00.\n");
                return 1; 
            }
            break;
        default:
            printf("Opção de pagamento inválida.\n");
            return 1; 
    }

    
    printf("O valor total das prestações é: R$ %.2f\n", valorPrestacao);

    return 0;
    
}
