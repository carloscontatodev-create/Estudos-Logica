#include <stdio.h>

int main(){

    int n1, n2, n3, menor, meio, maior;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &n1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &n2);
    printf("Digite o terceiro valor: \n");
    scanf("%d", &n3);

    menor = n1;
    
    if (n2<menor){
        menor = n2;
    }
    if (n3<menor){
        menor = n3;
    }
    
    maior = n1;

    if (n2>maior){
        maior = n2;
    }
    if (n3>maior){
        maior = n3;
    }

    meio = (n1+n2+n3)-maior-menor;

    printf("O valor do meio e o %.0d \n", meio);


    return 0;
}