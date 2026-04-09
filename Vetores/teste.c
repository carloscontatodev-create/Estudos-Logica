#include <stdio.h>

int main(){

    float celsius, conversao;
    
    printf("Digite uma temperatura em celsius para converter: \n");
    scanf("%f", celsius);

    conversao = (celsius*1.8)+32;

    printf("Em Fahrenheit e de: %f \n", conversao);

    return 0;
}