#include <stdio.h>

int main(){

    float celsius, conversao, fah;

    printf("Digite quantos celsius sao: \n");
    scanf("%f", &celsius);

    conversao = (celsius*9/5)+32;

    printf("Em Fahrenheit sera: %.0f \n", conversao);


    return 0;
}