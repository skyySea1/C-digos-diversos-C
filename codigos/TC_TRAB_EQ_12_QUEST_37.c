#include <stdio.h>

int main(){
    int v, s, x, temp, saldo[10], valor[10];
    char t, tipo[10];
    for(int i = 0; i < 10; i++){
        printf("Saldo inicial %d?: ", i);
        scanf(" %d", &s);
        if(s == -1){
            break;
        }
        saldo[i] = s;
        
        do {
            printf("Tipo de despesa %d? (R = Receita / D = Despesa): ", i);
            scanf(" %c", &t);
        } while (t != 'R' && t != 'D');
        tipo[i] = t;
        
        printf("Valor %d?: ", i);
        scanf(" %d", &v);
        valor[i] = v;
        temp++;
    }
    for(int i = 0; i < temp; i++){
        if(tipo[i] == 'R'){
            x = saldo[i] + valor[i];
            printf("Projeto %d: %d\n", i, x);
        } else {
            x = saldo[i] - valor[i];
            printf("Projeto %d: %d\n", i, x);
        }
    }
    return(0);
}