#include <stdio.h>

int main(){

    int n1, n2, n3, n4, maior;

    printf("Primeiro numero \n");
    scanf("%d", &n1);
    printf("Segundo numero \n");
    scanf("%d", &n2);    
    printf("Terceiro numero \n");
    scanf("%d", &n3);
    printf("Quarto numero \n");
    scanf("%d", &n4);
    
    maior = n1;

    if(n2>maior){
        maior = n2;
    }
    if(n3>maior){
        maior = n3;
    }
    if(n4>maior){
        maior = n4;
    }

    printf("O maior numero e %d \n", maior);


    return 0;
}