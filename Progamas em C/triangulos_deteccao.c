#include <stdio.h>

int main(){

    int lado1, lado2, lado3;

    printf("Primeiro lado: \n");
    scanf("%d", &lado1);
    printf("Segundo lado: \n");
    scanf("%d", &lado2);
    printf("Terceiro lado: \n");
    scanf("%d", &lado3);

    if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
        printf("Equilatero");
    }
    else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
        printf("Escaleno");
    }
    else{
        printf("isoceles");
    }


    return 0;
}