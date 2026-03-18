#include <stdio.h>

int main(){

    int n1, n2, n3;

    printf("n1: \n");
    scanf("%d", &n1);
    printf("n2: \n");
    scanf("%d", &n2);
    printf("n3: \n");
    scanf("%d", &n3);

    if(n1 == n2 && n1 == n3 && n2 == n3){
        printf("Todos sao iguais");
    }    
    else if(n1 == n2 || n1 == n3 || n2 == n1 || n2 == n3 || n3 == n1 || n3 == n2){
        printf("Dois São Iguais");
    }
    else{
        printf("Todos sao diferentes");
    }

    return 0;
}