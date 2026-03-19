#include <stdio.h>

int main(){

    int meta, calorias=0, soma=0;

    printf("-- Bem-Vindo ao Progama Controle de Calorias -- \n");
    printf("Qual a sua meta desejada de calorias ? \n");
    scanf("%d", &meta);
    
    while (soma<meta){
        printf("Digite o valor da refeicao: \n");
        scanf("%d", &calorias);

        soma += calorias;
        
        printf("Progresso - %d/%d \n",soma, meta);

    } 
    printf("-- Parabens, META ATINGIDA --\n Voce consumiu um total de %d calorias. \n", soma);


    return 0;
}