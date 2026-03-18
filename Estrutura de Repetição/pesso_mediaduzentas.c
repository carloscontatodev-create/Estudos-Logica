#include <stdio.h>

int main(){

    float n1, n2, n3, media;

    printf("Primeira nota: \n");
    scanf("%f", &n1);
    printf("Primeira nota: \n");
    scanf("%f", &n2);
    printf("Primeira nota: \n");
    scanf("%f", &n3);

    media = ((n1*2)+(n2*3)+(n3*5))/(2+3+5);

    printf ("A media ponderada e igual a: %.1f \n", media);

    return 0;
}   