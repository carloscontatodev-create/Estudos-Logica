#include <stdio.h>

int main(){

    int num, maior;

    maior = -999999

    for(int i=1;i<=5;i++){
        printf("Digite um numero: \n");
        scanf("%d", num);

        if (num>menor){
            maior = num;
        }
    
    }

    printf("O maior numero e: %d", maior);

    return 0;
}