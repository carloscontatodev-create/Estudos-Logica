#include <stdio.h>

int main(){

    float pesos[5], media=0, soma=0;

    for (int i=0;i<=4;i++){
        printf("Digite o %d peso: \n", i+1);
        scanf("%f", &pesos[i]);
    }
    for (int j=0;j<=4;j++){
        soma += pesos[j];
    }
    media = soma/5;
    printf("A media de pesos e de %.2f\n", media);
    for (int z=0;z<=4;z++){

        if (pesos[z]>media){
            printf("o peso %.2f esta acima da media!\n", pesos[z]);
        }
        else{
            printf("o peso %.2f esta abaixo da media!\n", pesos[z]);
        }
        
    }
    return 0;
}