#include <stdio.h>

int main(){

    int nota50=0, nota20=0, nota10=0, valor, saque;

    printf("Digite um valor que deseja sacar: \n");
    scanf("%d", saque);

    while (saque<50 || saque==50){
        valor = saque-50;
        nota50 += 1;
    }
    while (saque<20 || saque==20){
        valor = saque-20;
        nota20 += 1;
    }
    while (saque<10 || saque==10){
        valor = saque-10;
        nota10 += 1;
    }

    printf("Quantida de nota de 50 foi de: %d.\n", nota50);
    printf("Quantida de nota de 20 foi de: %d.\n", nota20);
    printf("Quantida de nota de 10 foi de: %d.\n", nota10);







    return 0;
}