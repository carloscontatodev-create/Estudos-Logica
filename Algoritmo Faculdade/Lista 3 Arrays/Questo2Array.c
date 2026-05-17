#include <stdio.h>
#include <stdlib.h>

int main(){

    int num [10];
    int numMundoInvertido [10];

    for (int i=0;i<=9;i++){
        printf("Digite o %d numero: \n", i+1);
        scanf("%d", &num[i]);
    }
    for (int i=0;i<=9;i++){
        numMundoInvertido[i] = num[9-i];
    }

    for (int i=0;i<=9;i++){
        printf("%d ", numMundoInvertido[i]);
    }

    system("pause")
    return 0;
}