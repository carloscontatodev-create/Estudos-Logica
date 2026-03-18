#include <stdio.h>

int main(){

    int idade1, idade2;

    printf("Digite sua idade: \n");
    scanf("%d", idade1);

    if (idade1>=16){
        printf("pode votar!");
    }
    else{
        printf("Voce nao tem idade");
    }
    if (idade1>=18){
        printf("Voce pode dirigir");
    }
    else{
        printf("Voce nao pode dirigir");
    }

    return 0;
}