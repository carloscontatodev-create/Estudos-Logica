#include <stdio.h>

int main(){

    int valor, porcentagem;
    float  desconto;

    printf("Digite o valor do produto: \n");
    scanf("%d",&valor);
    
    porcentagem = 15;
    desconto = valor-(valor/100*porcentagem);
    printf("O valor do produto apos o desconto de 15 e de: \n%.1f",desconto);



    return 0;
}