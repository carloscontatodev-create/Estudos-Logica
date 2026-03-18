#include <stdio.h>

int main(){

    int n1, n2, n3, menor, meio, maior;

    printf("Primeiro numero: \n");
    scanf("%d", n1);
    printf("Segundo numero \n");
    scanf("%d", n2);
    printf("Terceiro numero \n");
    scanf("%d", n3);

    menor = n1;
    
    if (n2<menor){
        menor = n2;
    }
    else if (n3<menor){
        menor = n3;
    }
    
    maior = n1;

    if (n2>maior){
        maior = n2;
    }
    else if (n3>maior){
        maior = n3;
    }

    (n1+n2+n3)-maior-menor;




    return 0;
}