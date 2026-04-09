#include <stdio.h>

int main(){

    float totalSemanal=0;
    float caixa[7], media;

    for (int i=0;i<=6;i++){

        if(i==0){
            printf("Segunda-Feira\n");
        }
        if(i==1){
            printf("Terca-Feira\n");
        }
        if(i==2){
            printf("Quarta-Feira\n");
        }
        if(i==3){
            printf("Quinta-Feira\n");
        }
        if(i==4){
            printf("Sexta-Feira\n");
        }
        if(i==5){
            printf("Sabado\n");
        }
        if(i==6){
            printf("Domingo\n");
        }
        printf("Quanto a loja vendeu hoje ? \n");
        scanf("%f", &caixa[i]);
    }
    for (int j=0;j<=6;j++){
        totalSemanal += caixa[j];
    }

    media = totalSemanal/7;

    printf("A media de vendas da semana foi de %.2f\n", media);

    return 0;
}