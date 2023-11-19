#include <stdio.h>

int main() {
    char nome[50];
    int matricula;
    float nota1, nota2, nota3;
    float media;
    float somaNotas = 0;
    int totalAlunos = 0;

    printf("Digite o nome do aluno (ou '0' para encerrar): ");
    scanf("%s", nome);

    while (nome[0] != '0') {
        printf("Digite a matrícula do aluno: ");
        scanf("%d", &matricula);

        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &nota2);

        printf("Digite a terceira nota do aluno: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        printf("Nome: %s\n", nome);
        printf("Matrícula: %d\n", matricula);
        printf("Nota 1: %.2f\n", nota1);
        printf("Nota 2: %.2f\n", nota2);
        printf("Nota 3: %.2f\n", nota3);
        printf("Média: %.2f\n", media);

        if (media >= 7) {
            printf("Situação: Aprovado\n");
        } else {
            printf("Situação: Reprovado\n");
        }

        somaNotas += media;
        totalAlunos++;

        printf("\nDigite o nome do próximo aluno (ou '0' para encerrar): ");
        scanf("%s", nome);
    }

    if (totalAlunos > 0) {
        float mediaTurma = somaNotas / totalAlunos;
        printf("\nMédia de notas da turma: %.2f\n", mediaTurma);
    } else {
        printf("\nNenhum aluno foi inserido.\n");
    }

    return 0;
}