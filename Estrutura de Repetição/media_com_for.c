#include <stdio.h>

int main(){

    int qnt;
    float notas, media, soma;
   
    soma = 0;

    printf("Quantas notas desejas inseirar ? \n");
    scanf("%d", &qnt);

    for(int i=1; i<=qnt; i++){
        printf("Digite as notas: \n");
        scanf("%f", &notas);

        soma = soma+notas;

    }

    media = soma/qnt;

    printf("A media e %.1f", media);

    return 0;
}