#include <stdio.h>

int main(){

    int armazem[5];

    for (int i=0;i<=4;i++){
        printf("Digite um numero: \n");
        scanf("%d", &armazem[i]);
    }
    for(int j=0;j<=4;j++){
        printf("Dentro da gaveta %d tem o numero: %d\n", j, armazem[i]);
    }





    return 0;
}