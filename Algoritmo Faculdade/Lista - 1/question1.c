#include <stdio.h>

int main(){

    int segundos, horas, minutos, dias, resto;

    printf ("Digite um quantidade de segundos: \n");
    scanf("%d", &segundos);

    dias = segundos/86400;
    resto = segundos%86400;
    
    horas = resto/3600;
    resto = resto%3600;

    minutos = resto/60;
    resto = resto%60;

    segundos = resto;

    printf("%.02d:%.02d:%.02d:%.02d", dias, horas, minutos, segundos);

    return 0;
}