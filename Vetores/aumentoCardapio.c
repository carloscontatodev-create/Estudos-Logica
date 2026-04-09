#include <stdio.h>

int main(){

    float precos[5];

    for (int i=0;i<=4;i++){
        printf("Digite o %d valor antigos: \n", i);
        scanf("%f", precos[i]); 
    }
    for (int j=0;j<=4;j++){
        precos[j]=precos[j]*1.10;

    }
    for (int z=0;z<=4;z++){
        printf("O valor apos o aumento e de: %.2f", precos[z]);
    }



    return 0;
}