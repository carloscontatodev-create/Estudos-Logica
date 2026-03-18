#include <stdio.h>
#include <math.h>

int main(){

    float peso, altura, altura1, imc, imc1;
    
    printf("Digite o seu peso em kg: \n");
    scanf("%f", &peso);
    printf("Digite sua altura em cm: \n");
    scanf("%f", &altura1);

    altura = altura1/100;
    imc = peso/pow(altura, 2);
    printf("O seu IMC e: %.2f \n", imc);
    
    
    if (imc<18.5){
        printf("Abaixo do peso! \n");
    }
    else if (imc>=18.5 && imc<=24.9){
        printf("Peso Normal! \n");
    }
    else if (imc>=25 && imc<=29.9){
        printf("Sobrepeso \n");   
    }
    else{
        printf("Obesidade \n");
    }






    return 0;
}