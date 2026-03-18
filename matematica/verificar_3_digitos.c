#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero \n");
    scanf("%d", &numero);

    if(numero>100 && numero<999){
        printf("Esse numero tem 3 digitos e sao eles %.0d \n", numero);
    }
    else{
        printf("Nao possui tres numeros \n");
    }

    return 0;
}