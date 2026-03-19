#include <stdio.h>

int main(){

    int faturamento=0, despesas=0, movimentacoes, saldoFinal, decisao;

    printf("Ola, deseja realizar a abertura do caixa (1. Sim - 2. Nao)\n");
    scanf("%d", &decisao);

    if (decisao == 1){

    while (decisao=1){

        printf("Digite o valor: \n");
        scanf("%d", &movimentacoes);

        if (movimentacoes>0){
            faturamento = faturamento+movimentacoes;
        }
        else if (movimentacoes<0){
            despesas = despesas+movimentacoes;
        }
        else if (movimentacoes == 0){
            break;
        }

    }

    saldoFinal = faturamento+despesas;

    printf ("O total faturado foi de: %d \n", faturamento);
    printf ("O total de despesas foi de: %d \n", despesas);
    printf ("Saldo final foi de: %d \n", saldoFinal);
}
    else{
        printf("Ok, Obrigado! Tenha um bom dia.");
    }


    return 0;
}
