#include <stdio.h>

int main(){

    int numero, zero;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    if(numero<0){
        printf("Numero Invalido");
    }
    else{ if(numero%2==0){
        printf("Par");
    }
    else{
        printf("Impar");
    }
    }
    




    return 0;
}