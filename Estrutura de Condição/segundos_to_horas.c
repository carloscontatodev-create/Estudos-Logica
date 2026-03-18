#include <stdio.h>

int main(){

    int segundos, horas, minutos, resto;

    printf("Digite um quantidade de segundos desejada: \n");
    scanf("%d", segundos);

    //horas
    horas = segundos/3600;
    resto = segundos%3600;

    //minutos
    minutos = resto/60;
    resto = resto%60;

    //segundos
    segundos = resto/1;

    printf("O tempo convertido sera de %d:%d:%d \n", hora, minutos, segundos);

    return 0;
}