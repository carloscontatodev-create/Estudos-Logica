#include <stdio.h>

int main(){

    int nota100, nota50, nota20, nota10, nota5, nota2, resto;
    int valor, valor2;
    int moeda1, moeda50c, moeda25c, moeda10c, moeda5, moeda1c;

    printf ("Digite um valor que deseja sacar: \n");
    scanf("%d", &valor);

    valor = valor*100;
    
    //100
    nota100 = valor/10000;
    resto = valor%10000;

    //50    
    nota50 = resto/5000;
    resto = resto%5000;

    //20
    nota20 = resto/2000;
    resto = resto%2000;

    //10
    nota10 = resto/1000;
    resto = resto%1000;

    //5
    nota5 = resto/500;
    resto = resto%500;

    //2
    nota2 = resto/200;
    resto = resto%200;

    //1
    moeda1 = resto/100;
    resto = resto%100;

    //0.5
    moeda50c = resto/59;
    resto = resto%50;

    //0.25
    moeda25c = resto/25;
    resto = resto%25;

    //0.10
    moeda10c = resto/10;
    resto = resto%10;

    //0.05
    moeda5 = resto/5;
    resto = resto%5;
    
    //0.01
    moeda1c = resto/1;

    printf("A quantidade em notas de 100 reais sera de %d \n", nota100);
    printf("A quantidade em notas de 50 reais sera de %d \n", nota50);
    printf("A quantidade em notas de 20 reais sera de %d \n", nota20);
    printf("A quantidade em notas de 10 reais sera de %d \n", nota10);
    printf("A quantidade em notas de 5 reias sera de %d \n", nota5);
    printf("A quantidade em notas de 2 reais sera de %d \n", nota2);

    printf("A quantidade em moedas de 1 real sera de %d \n", moeda1);
    printf("A quantidade em moedas de 50 centavos sera de %d \n", moeda50c);
    printf("A quantidade em moedas de 25 centavos sera de %d \n", moeda25c);
    printf("A quantidade em moedas de 10 centavos sera de %d \n", moeda10c);
    printf("A quantidade em moedas de 5 centavos sera de %d \n", moeda5);
    printf("A quantidade em moedas de 1 centavos sera de %d \n", moeda1c);




    return 0;
}