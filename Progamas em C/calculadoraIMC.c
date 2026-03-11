#include <stdio.h>
#include <math.h>

int main(){

    float altura, peso, imc, altura1, altura2;

    printf("Digite sua Altura em cm: \n");
    scanf("%f", &altura1);
    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    altura = altura1/100;
    altura2 =  pow(altura, 2);
    imc = peso/altura2;

    printf("O seu imc e: %.2f \n", imc);
    
    if (imc>18.5){
        printf("Voce esta magro");
    }
    else if (imc>=18.5 && imc<=24.9){
        printf("Voce esta normal");
    }
    else if (imc>=25 && imc<=29.9){
        printf("Voce esta com sobrepeso");
    }
    else{
        printf("Voce esta obesa");
    }


    return 0;
}