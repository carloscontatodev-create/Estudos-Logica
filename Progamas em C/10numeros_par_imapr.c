#include <stdio.h>

int main(){

    int num;
    int pares = 0;
    int impares = 0;

    for(int i = 1; i <= 10; i++){

        printf("Digite o %d numero:\n", i);
        scanf("%d", &num);

        if(num % 2 == 0){
            pares++;
        }
        else{
            impares++;
        }
    }

    printf("\nQuantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}