#include <stdio.h>

int main(){

    int valor, nota50, nota20, nota10, nota5, nota2, moeda1, resto;

    printf("Digite o valor que deseja sacar: \n");
    scanf("%d", valor);

    ///50
    nota50 = valor/50;
    resto = valor % 50;
    
    //20
    nota20 = resto/20;
    resto = resto%20;

    //10
    nota10 = resto/10;
    resto = resto%10;

    //5
    nota5 = resto/5;
    resto = resto%5;

    //2
    nota2 = resto/2;
    resto = resto%2;

    //1
    moeda1 = moeda1/2;

    printf("O valor de notas de 50 reais sera de: %d\n", nota50);
    printf("O valor de notas de 20 reais sera de: %d\n", nota20);
    printf("O valor de notas de 10 reais sera de: %d\n", nota10);
    printf("O valor de notas de 5 reais sera de: %d\n", nota5);
    printf("O valor de notas de 2 reais sera de: %d\n", nota2);
    printf("O valor em moedas de 1 real sera de: %d\n", moeda1);

    return 0;
}