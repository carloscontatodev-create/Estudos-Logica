#include <stdio.h>

int main(){

    float num1, num2;
    float soma, sub, multi, divi;

    printf("Primeiro numero: \n");
    scanf("%f", &num1);
    printf("Segundo numero: \n");
    scanf("%f", &num2);

    soma = num1+num2;
    sub = num1-num2;
    multi = num1*num2;
    divi = num1/num2;

    printf("O resultado da soma e: %.0f \n", soma);
    printf("O resultado da subtracao e: %.0f \n", sub);
    printf("O resultado da multiplicacao e: %.0f \n", multi);
    printf("O resultado da divisao e: %.0f \n", divi);


    return 0;
}