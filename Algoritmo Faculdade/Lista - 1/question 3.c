#include <stdio.h>

int main(){

    int n1, n2, n3, menor, medio, maior;

    printf("DIgite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("DIgite o segundo numero: \n");
    scanf("%d", &n2);
    printf("DIgite o terceiro numero: \n");
    scanf("%d", &n3);
    ////////////////////////////////////
    if (n1<=n2 && n1<=n3){
        menor = n1;
    }
    else if (n2<=n1 && n2<=n3){
        menor = n2;
    }
    else {
        menor = n3;
    }
    ////////////////////////////////////
    if (n1>=n2 && n1>=n3){
        maior = n1;
    }
    else if (n2>=n1 && n2>=n3){
        maior = n2;
    }
    else {
        maior = n3;
    }
    ///////////////////////////////////
    medio = n1+n2+n3-maior-menor;
    ///////////////////////////////////
    printf("O maior numero e: %d\n", maior);
    printf("O mediano numero e: %d\n", medio);
    printf("O menor numero e: %d\n", menor);

    return 0;
}