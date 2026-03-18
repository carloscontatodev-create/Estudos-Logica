#include <stdio.h>

int main(){

    int num, multiplo;
    
    printf("Digite um numero: \n");
    scanf("%d", num);

    if (num%5 == 0){
        printf("Ele e multiplo de 5");
    }
    else{
        printf("Ele nao e multiplo de 5");
    }


    return 0;
}