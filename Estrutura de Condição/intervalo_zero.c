#include <stdio.h>

int main(){

    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    if (num>=100 && num<=200){
        printf ("Ele esta dentro do intervalo");
    }
    else if (num == 0){
        printf ("ele e extamente zero");
    }
    else {
        printf("Ele esta fora do intervalo");
    }

    return 0;
}