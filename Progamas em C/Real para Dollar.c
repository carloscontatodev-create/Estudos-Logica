#include <stdio.h>

int main(){
    
    float dollar, real, conversao;
    printf("Quantos reais deseja converter para dollar ?\n");
    scanf("%f", &real);

    dollar = 5.25;
    conversao = real*dollar;

    printf("O valor em dollar sera de exatamente:\n%.2f", conversao);







    return 0;
}