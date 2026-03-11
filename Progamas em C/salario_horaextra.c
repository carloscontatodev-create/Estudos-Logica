#include <stdio.h>

int main(){

    float salario, salarionovo, valorhora;
    int qnthora;

    printf("Qual o salario base: \n");
    scanf("%f", &salario);
    printf("Quantas horas extras ? \n");
    scanf("%d", qnthora);

    valorhora = salario/160;
    salarionovo = salario + valorhora;
    
    printf("O salario vai ser de: %.0f \n", salarionovo);

    return 0;
}