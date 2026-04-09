#include <stdio.h>

int main(){

    float num, soma=0, media;
    int contadorn=0;

    do {

        printf("Digite um numero: \n");
        scanf("%f", &num);
        
        if (num>0){
            contadorn++;
            soma += num;
        }

    } while (num>=0);

    media = soma/contadorn; 

    printf ("A media dos valores e igual a: %f", media);

    return 0;
}