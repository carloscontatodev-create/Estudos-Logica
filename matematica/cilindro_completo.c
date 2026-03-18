#include <stdio.h>
#include <math.h>

int main(){

    double volume, raio, area, altura, pi;

    printf("Digite o raio do cilindro: \n");
    scanf("%lf", &raio);
    printf("Digite a altura do cilindro:");
    scanf("%lf", &altura);

    pi = 3.14;
    volume = pow(raio, 2)*pi*altura;
    area = pow(raio,2)*pi;
    
    printf("O volume do cilindro e: %.0lf \n",volume);
    printf("A area do cilindro e: %.0lf \n", area);


    return 0;
}