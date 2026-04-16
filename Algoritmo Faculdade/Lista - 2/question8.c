#include <stdio.h>
#include <math.h>

int main(){

    float peso, altura;
    float imc;

    printf("Digite seu peso em KG: \n");
    scanf("%f", &peso);
    printf("Digite sua altura em CM: \n");
    scanf("%f", &altura);

    altura = altura/100;

    imc = peso/pow(altura,2);
    
    printf("Seu IMC e: %.2f \n", imc);

    system("pause");
    return 0;
}