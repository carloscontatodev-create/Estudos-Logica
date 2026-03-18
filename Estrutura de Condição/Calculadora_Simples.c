#include <stdio.h>

int main(){

    float n1, n2, operacao, res;

    printf("Primerio valor: \n");
    scanf("%f", &n1);
    printf("Segundo valor: \n");
    scanf("%f", &n2);
    printf("Digite o numero da operacao desejada: 1 - Soma, 2 - Subtração, 3 - Multiplicacao, 4 - Divisao \n");
    scanf("%f", &operacao);

    if(operacao==1){
        res = n1+n2;
    }
    if(operacao==2){
        res = n1-n2;
    }
    if(operacao==3){
        res = n1*n2;
    }
    if(operacao==4){
        res = n1/n2;
    }
    if(operacao>4){
        printf("Escolha entre 1 a 4!");
    }
    else{
    printf("\nO resultado e: %f", res); 
    }



    return 0;
}