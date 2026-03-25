#include <stdio.h>

int main(){

    int maior, menor, peso;

    print ("-- DIGITE SEU PESO PARA COMECAR --");
    printf("Digite seu peso: \n");
    scanf("%d", &peso);

    if(peso==0){
        printf("\n")
    }

    menor = peso;
    maior = peso;

    do{
        printf("Digite seu peso: \n");
        scanf("%d", &peso);

        if (peso<=0){
            break;
        }
        if (peso<peso){
            menor = peso;
        }
        if (peso>peso){
            maior = peso;
        }


    } while (peso>0);
    printf("---------------------------\n");
    printf("O maior peso digitado foi %d.", maior);
    printf("---------------------------\n");
    printf("---------------------------\n");
    printf("O menor peso digita foi %d", menor);
    printf("---------------------------\n");


    return 0;
}