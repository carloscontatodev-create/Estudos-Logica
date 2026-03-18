#include <stdio.h>

int main(){

    int ano, seculo;

    printf("Digite um ano: \n");
    scanf("%d", &ano);

    seculo = (ano-1)/100+1;

    printf("Esse ano pertence ao seculo %d \n", seculo);


    return 0;
}