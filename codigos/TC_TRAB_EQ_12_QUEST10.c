#include <stdio.h>

int main() {
    int matricula;
    char nome[50];
    float horasTrabalhadas, valorHora, salarioBruto, salarioLiquido, inss, sindicato, planoSaude;
    float totalFolha = 0, totalContribuicao = 0, totalEncargos = 0;

    printf("Informe a matrícula (ou digite 0 para encerrar): ");
    scanf("%d", &matricula);

    while (matricula != 0) {
        printf("Informe o nome do funcionário: ");
        scanf("%s", nome);

        printf("Informe o total de horas trabalhadas: ");
        scanf("%f", &horasTrabalhadas);

        printf("Informe o valor da hora trabalhada: ");
        scanf("%f", &valorHora);

        salarioBruto = horasTrabalhadas * valorHora;
        inss = salarioBruto * 0.085;
        sindicato = salarioBruto * 0.0102;
        planoSaude = salarioBruto * 0.06;

        salarioLiquido = salarioBruto - inss - sindicato - planoSaude;

        printf("\nMatrícula: %d\nNome: %s\n", matricula, nome);
        printf("Salário Bruto: R$ %.2f\n", salarioBruto);
        printf("Salário Líquido: R$ %.2f\n\n", salarioLiquido);

        totalFolha += salarioBruto;
        totalContribuicao += (inss + sindicato + planoSaude);
        totalEncargos += (inss + sindicato + planoSaude);

        printf("Informe a próxima matrícula (ou digite 0 para encerrar): ");
        scanf("%d", &matricula);
    }

    printf("\nTotal da folha de pagamento: R$ %.2f\n", totalFolha);
    printf("Total de contribuições: R$ %.2f\n", totalContribuicao);
    printf("Total de encargos: R$ %.2f\n", totalEncargos);

    return 0;
}
