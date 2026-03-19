#include <stdio.h>

int main(){

    int num=5;

    printf("-- IMPRIMIR TRIANGULO RETO --\n");

    for (int i=1;i<=num;i++){

        for (int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}