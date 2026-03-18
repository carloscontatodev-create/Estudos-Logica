#include <stdio.h>

int main(){

    int idade, dia, mes;

    printf("Qual sua idade em anos ? \n");
    scanf("%d", &idade);

    dia = idade*365;
    mes = idade*12;

    printf("Sua idade em meses e igual a: %.0d \n", mes);
    printf("Sua idade em dias e igual a: %.0d \n", dia);



    return 0;
}