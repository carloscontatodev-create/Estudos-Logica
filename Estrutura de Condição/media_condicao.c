#include <stdio.h>

int main(){

    float n1, n2, n3, media;

    printf("Primeira nota: \n");
    scanf("%f", &n1);
    printf("Segundo nota: \n");
    scanf("%f", &n2);
    printf("Terceira nota: \n");
    scanf("%f", &n3);

    media = (n1 + n2 + n3)/3;

    if(media>=5 && media<7)  {
        printf("Recuperacao\n");
    }
    else if(media<=4)    {
        printf("Reprovado\n");
    }
    else    {
        printf("Aprovado\n");
    }

    return 0;
}