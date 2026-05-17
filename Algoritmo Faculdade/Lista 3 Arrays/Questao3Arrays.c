#include <stdio.h>
#include <stdlib.h>

int main(){

    int contadorPar = 0;
    int contadorImpar = 0;
    int num [10];

    for (int i=0;i<=9;i++){
        printf("Digite o %d numero: \n", i+1);
        scanf("%d", &num[i]);
    }
    for (int i=0;i<=9;i++){
        if (num[i]%2==0){
            contadorPar++;
        }
        else {
            contadorImpar++;
        }
    }
    printf ("-------------------------\n");
    printf("Pares: ");
    for (int i=0;i<=9;i++){
        if (num[i]%2==0){
            printf("%d ", num[i]);
        }
    }
    printf("\n");
    printf("Possui um total de %d pares!\n", contadorPar);

    printf("Impares: ");
    for (int i=0;i<=9;i++){
        if (num[i]%2==1){
            printf("%d ", num[i]);
        }
    }
    printf("\n");
    printf("Possui um total de %d Impares!\n", contadorImpar);
    printf ("-------------------------\n");
    
    system("pause")
    return 0;
}