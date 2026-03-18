#include <stdio.h>

int main(){

    int dia;

    printf("Escolha um dia da semana, entre 1 a 7. \n");
    scanf("%d", &dia);

    if(dia>7){
        printf("Por favor escolha um numero entre 1 e 7.");
    }
    else{
    switch (dia){

            case(1):
            printf("Segunda");
            break;
            case(2):
            printf("Terca");
            break;
            case(3):
            printf("Quarta");
            break;
            case(4):
            printf("Quinta");
            break;
            case(5):
            printf("Sexta");
            break;
            case(6):
            printf("Sabado");
            break;
            case(7):
            printf("Domingo");
            break;
        }
    }

    return 0;
}