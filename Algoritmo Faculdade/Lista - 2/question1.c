#include <stdio.h>

int main(){

    int segundos, minutos, horas, resto;

    printf ("Digite um valor de segundos: \n");
    scanf("%d", &segundos);

    horas = segundos/3600;
    resto = segundos%3600;
    
    minutos = resto/60;
    resto = resto%60;

    segundos = resto/1;

    printf("%.2d:%.2d:%.2d", horas, minutos, segundos);

    system("pause");
    return 0;
}