#include <stdio.h>

int main(){

    int num, verifica;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    if (num%3 == 0){
        printf("E multiplo de 3");
    }
    else{
        printf("Nao e multiplo");
    }
    return 0;
}