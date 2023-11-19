#include <stdio.h>

int main() {
    int dia, mes, ano, i, minimo, dias[64], meses[64], anos[64];
    //for scaneando os dias, meses e anos de cada data
    for (i = 0; i < 64; i++) {
        do {
            printf("Dia da data %d?: ", i);
            scanf(" %d", &dia);
        } while (dia < 0 || dia > 31);
        dias[i] = dia;
        do {
            printf("Mês da data %d?: ", i);
            scanf(" %d", &mes);
        } while (mes < 0 || mes > 12);
        meses[i] = mes;
        printf("Ano da data %d?: ", i);
        scanf(" %d", &ano);
        anos[i] = ano;
        //Se a data escaneada for 0/0/0 um break ocorrerá
        if (dias[i] == 0 && meses[i] == 0 && anos[i] == 0) {
            break;
        }
    }
    //Ocorrerá aqui o processo de ordenamento de datas
    for (int j = 0; j < i - 1; j++) {
        minimo = j;
        //a prioridade são os anos, depois os meses e dias
        for (int k = j + 1; k < i; k++) {
            if (anos[k] < anos[minimo] || (anos[k] == anos[minimo] && meses[k] < meses[minimo]) || 
            (anos[k] == anos[minimo] && meses[k] == meses[minimo] && dias[k] < dias[minimo])) {
                minimo = k;
            }
        }
        //Troca de datas
        if (minimo != j) {
            int temp = anos[j];
            anos[j] = anos[minimo];
            anos[minimo] = temp;

            temp = meses[j];
            meses[j] = meses[minimo];
            meses[minimo] = temp;

            temp = dias[j];
            dias[j] = dias[minimo];
            dias[minimo] = temp;
        }
    }
    //Mostra no terminal as datas na sequencia correta
    for (int l = 0; l < i; l++) {
        printf("%d/%d/%d  ", dias[l], meses[l], anos[l]);
    }
    return(0);
}