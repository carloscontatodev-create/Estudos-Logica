#include <stdio.h>

int main(){

    int n1, n2, soma, soma1;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);

    soma = n1+n2;

    if (soma>20){
        soma1 = soma+8;
    }
    else if (soma<=20){
        soma1 = soma-5;
    }
    else{
        soma1 = soma;
    }

    printf("O resultado e: %.0d\n");





    return 0;
}