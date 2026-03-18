#include <stdio.h>

int main(){

    int a, b, menor;

    printf("Digite um valor para A: \n");
    scanf("%d", a);
    printf("Digite um valor para B: \n");
    scanf("%d", b);

    menor = a;

    if(b<menor){
        b = a;
        a = menor;
    }

    printf ("O valor de B e: %d, e o valor de A e: %d", b, a);




    return 0;
}