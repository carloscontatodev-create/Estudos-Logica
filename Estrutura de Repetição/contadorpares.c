#include <stdio.h>

int main(){

    int contador, n1, n2, n3;

    printf("Digite tres numeros: \n");
    scanf("%d %d %d", n1, n2, n3);

    contador = 0;

    if (n1%2 == 0){
        contador = contador+1;
    }
    if (n2%2 == 0){
        contador = contador+1;
    }
    if (n3%2 == 0){
        contador = contador+1;
    }

    printf("Sao pares %d numeros\n", contador);



    return 0;
}