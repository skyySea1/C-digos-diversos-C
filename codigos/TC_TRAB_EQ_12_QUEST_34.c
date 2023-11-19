#include <stdio.h>

int main(){
    int segundo, atemp, btemp, ctemp, dtemp, a = 0, b = 0, c = 0, d = 0, segundos[61];
    //for escaneando os 60 segundos (e a velocidade inicial)
    for (int i = 0; i < 61; i++){
        printf("velocidade do segundo %d?: ", i);
        scanf(" %d", &segundo);
        segundos[i] = segundo; 
    }
    //A (Maior periodo de tempo que se deslocou sem diminuir a velocidade)
    for (int i = 0; i < 60; i++){
        if (segundos[i] <= segundos[i + 1]){
            ++atemp;
        } else {
            if(atemp > a){
                a = atemp;
            }
            atemp = 0;
        }
    }
    if (a == 1){
        printf("O maior periodo de tempo sem desacelerar foi 1 segundo\n");
    } else {
        printf("O maior periodo de tempo sem desacelerar foram %d segundos\n",a);
    }
    //B (Segundo em que teve a frenagem mais abrupta)
    for (int i = 0; i < 60; i++){
        if (segundos[i] - segundos[i + 1] > b){
            b = segundos[i] - segundos[i + 1];
            btemp = i;
        }
    }
    printf("O segundo %d tem a frenagem mais abrupta de %d m/s\n",btemp + 1 ,b);
    //C (Maior aceleração e em qual instante ela iniciou)
    for (int i = 0; i < 60; i++){
        if (segundos[i + 1] - segundos[i] > c){
            c = segundos[i + 1] - segundos[i];
            ctemp = i;
        }
    }
    printf("O segundo %d tem a maior aceleração de %d m/s\n",ctemp + 1 ,c);
    //D (Maior periodo de tempo com velocidade constante)
    for (int i = 0; i < 60; i++){
        if (segundos[i] == segundos[i + 1]){
            dtemp++;
        } else {
            if(dtemp > d){
                d = dtemp;
            }
            dtemp = 0;
        }
    }
    if (d == 1){
        printf("O maior periodo de tempo em velocidade constante foi 1 segundo");
    } else {
        printf("O maior periodo de tempo em velocidade constante foram %d segundos",d);
    }
    return(0);
}