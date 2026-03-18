#include <stdio.h>

int main(){

    int bissexto, ano;

    printf("Digite um ano: \n");
    scanf("%d", &ano);

    if (ano%4 == 0){
        printf("Bissexto");
    }
    else if (ano%400 == 0){
        printf("Bissexto");
    }
    else{
        printf("Não e Bissexto");
    }

    return 0;
}