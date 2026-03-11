#include <stdio.h>

int main(){

    float variavel, resu;
    int fixo, distancia;

    printf("Qual a distancia da viagem ?\n");
    scanf("%d", &distancia);
    printf("E cobrado um valor fixo de 20 R$, e mais 3,50 R$ p/km.\n");
    fixo = 20;
    variavel = 3.5;
    resu = (variavel*distancia)+fixo;

     if (distancia=1){
        printf ("O valor da corrida sera de:%d\n",fixo);
    }  
    else{
        printf ("O valor da corrida sera de: %.0f\n",resu);
    }
    


    return 0;
}