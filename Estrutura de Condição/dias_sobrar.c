#include <stdio.h>

int main(){

    int dias, semanas, resto;

    printf("Digite uma quantidade de dias: \n");
    scanf("%d", &dias);

    //semana
    semanas = dias/7;
    resto = dias%7;

    //dias
    dias = resto/1;

    printf("%d semanas e %d dias.\n", semanas, dias);

    return 0;
}