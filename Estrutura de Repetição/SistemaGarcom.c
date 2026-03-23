#include <stdio.h>

int main(){

    float  soma=0, valorGasto, ticketMedio;
    int contadorMesas, expediente;

    do{

        printf("1. Atender Mesa \n 2. Finalizar \n",);
        scanf("%d", &expediente);

        if (expediente==1){
            contadorMesas++;
            printf("Digite o valor gasto por essa mesa: \n");
            scanf("%f", &valorGasto);
            soma += valorGasto;

        }

    } while (expediente!=2);

    if (contadorMesas>0){
    ticketMedio = soma/contadorMesas;
    printf("O total faturado foi de: %d\n", soma);
    printf("O total de mesasa atendidas foi de %d\n", contadorMesas);
    printf("O ticketmedio desse dia foi de: %d\n", ticketMedio);
    }
    else{
        printf("Hoje nao foi atendida nenhuma mesa.");
    }
    
    return 0;
}