#include <stdio.h>

int main(){

    float n1, n2, n3, media;

    printf("Primeiro valor: \n");
    scanf("%f", &n1);
    printf("Segundo valor: \n");
    scanf("%f", &n2);
    printf("Terceiro valor: \n");
    scanf("%f", &n3);

    media = 3/(1/n1+1/n2+1/n3);
    printf("A media harmonica e: %.2f \n", media);



    return 0;
}