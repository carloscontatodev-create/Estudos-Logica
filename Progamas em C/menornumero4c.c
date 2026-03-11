#include <stdio.h>

int main(){

    int n1, n2, n3, n4, menor;

    printf("Primeiro numero \n");
    scanf("%d", &n1);
    printf("Segundo numero \n");
    scanf("%d", &n2);    
    printf("Terceiro numero \n");
    scanf("%d", &n3);
    printf("Quarto numero \n");
    scanf("%d", &n4);
    
    menor = n1;

    if(n2<menor){
        menor = n2;
    }
    if(n3<menor){
        menor = n3;
    }
    if(n4<menor){
        menor = n4;
    }

    printf("O maior numero e %d \n", menor);


    return 0;
}