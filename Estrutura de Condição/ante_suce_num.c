#include <stdio.h>

int main(){

    int num, sucessor, antecessor;

    printf("Escolha um numero: \n");
    scanf("%d", &num);

    sucessor = num+1;
    antecessor = num-1;

    printf("O sucessor do seu numero e: %d \n", sucessor);
    printf("O antecessor do seu numero e: %d \n", antecessor);



    return 0;
}