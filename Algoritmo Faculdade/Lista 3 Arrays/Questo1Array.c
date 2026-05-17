#include <stdio.h>
#include <stdlib.h>

int main(){

    int num [10];
    int soma = 0;
    int contador = 0;
    float media;

    for (int i=0;i<=9;i++){
        printf("Digite o %d numero: \n", i+1);
        scanf("%d", &num[i]);
        contador++;
    }
    for (int i=0;i<=9;i++){
        soma += num[i];
    }

    media = (float) soma/contador;

    printf("A media das notas é: %.2f\n", media);

    system("pause")
    return 0;
}