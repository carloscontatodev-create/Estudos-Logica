#include <stdio.h>

int main(){

    float salario;
    float taxa, taxa2, taxa3;

    printf("Digite o seu salario: \n");
    scanf("%f", &salario);

    taxa = 0.075;
    taxa2 = 0.09;
    taxa3 = 0.12;

    if (salario<=1412){
        salario = salario-salario*taxa;
    }
    else if (salario>=1412.01 && salario<=2668.68){
        salario = salario-salario*taxa2;
    }
    else{
        salario = salario-salario*taxa3;
    }


    printf ("O seu salario apos os descontos e igual a: %.2f\n", salario);

    
    return 0;
}