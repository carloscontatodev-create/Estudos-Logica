#include <stdio.h>

int main(){

    int acumula, total=0;

    for (int i=1;i<=4;i++){

        printf("Quantas horas voce estudou hoje ?");
        scanf("%d", &acumula);

        total += acumula;
    }

    printf("Voce estudou um total de %d horas\n", total);

    return 0;
}