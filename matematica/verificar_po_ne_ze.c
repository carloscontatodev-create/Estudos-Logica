#include <stdio.h>

int main(){

    float number;

    printf("Digite um número: \n");
    scanf("%f", &number);

    if (number>0){
        printf ("Positivo \n");
    }
    else if (number<0){
        printf("Negativo");
    }
    else   {
        printf("Zero");
    }




    return 0;
}