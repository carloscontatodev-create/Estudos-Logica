#include <stdio.h>

int main(){

    int num;

    printf("Digite a quantidade de usuarios: \n");
    scanf("%d", &num);

    if (num%2 == 0){
        printf("Esse numero e par!");
    }
    else{
        printf("Esse numero e impar!");
    }

    return 0;
}