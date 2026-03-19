#include <stdio.h>

int main(){

    int faturamento=0, despesas=0, movimentacoes, somafa=0, somade=0;

    while (movimentacoes>0){

        printf("Digite o valor: \n");
        scanf("%d", &movimentacoes);

        if (movimentacoes>0){
            somafa = somafa+faturamento;
        }
        else if (movimentacoes<0){
            somade = somade+despesas;
        }

    }

    printf ("O total faturado foi de: %d \n", somafa)


    return 0;
}