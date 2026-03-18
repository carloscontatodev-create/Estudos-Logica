#include <stdio.h>

int main(){

    int nota100, nota50, nota10, total;

    printf("Quantas notas de 100 voce tem no bolso ? \n");
    scanf("%d", nota100);
    printf("Quantas notas de 50 voce tem no bolso: ?\n");
    scanf("%d", nota50);
    printf("Quantas notas de 10 voce tem no bolso ?\n");
    scanf("%d", nota10);

    nota100 = nota100*100;
    nota50 = nota50*50;
    nota10 = nota10%*10;

    total = nota100+nota50+nota10;

    printf("Voce tem um total de %d reais no bolso! \n", total);



    return 0;
}