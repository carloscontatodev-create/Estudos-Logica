#include <stdio.h>

int main(){

    float n1, n2, res;
    int operacao;

    printf("Primerio valor: \n");
    scanf("%f", &n1);
    printf("Segundo valor: \n");
    scanf("%f", &n2);
    printf("Digite o numero da operacao desejada: 1 - Soma, 2 - Subtração, 3 - Multiplicacao, 4 - Divisao \n");
    scanf("%d", &operacao);

    switch (operacao){
        case 1:
            res = n1+n2;
        break;
        case 2:
            res = n1-n2;
        break;
        case 3:
             res = n1*n2;
        break;
        case 4:
            res = n1/n2;
        break;
    }

    if(operacao>4){
        printf("Escolha entre 1 a 4!");
    }
    else{
        printf("O resultado e: \n %.0f", res);
    }

    return 0;
}