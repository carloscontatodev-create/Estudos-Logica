#include <stdio.h>
#include <math.h>

int main(){

    float num, a, b, c;

    printf("Digite um numero: \n");
    scanf("%f", &num);

    a = num*2;
    b = num*3;
    c = sqrt(num);

    printf("O seu dobro e: %.0f \n", a);
    printf("O seu triplo e: %.0f \n", b);
    printf("A sua raiz e: %.0f \n", c);


    return 0;
}