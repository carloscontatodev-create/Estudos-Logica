#include <stdio.h>

int main(){

    int n1, n2, sair, opcao, operacao=0;

    printf("-- CAIXA ABERTO -- \n");
    printf("-- SELECIONE A OPCAO DESEJADA -- \n");

    do{

        printf("Escolha: \n 1. Somar dois numeros \n 2. Subtrair dois numeros \n 3. Sair \n");
        scanf("%d", &opcao);

        if (opcao == 1){
            printf("Digite o primeiro numero: \n");
            scanf("%d", &n1);
            printf("Digite o segundo numero: \n");
            scanf("%d", &n2);

            operacao = n1+n2;
            printf("A soma entre eles e de: %d \n", operacao);
            
        }
        else if (opcao == 2){
            printf("Digite o primeiro numero: \n");
            scanf("%d", &n1);
            printf("Digite o segundo numero: \n");
            scanf("%d", &n2);

            operacao = n1-n2;
            printf("A subtracao entre eles e de: %d \n", operacao);
            
        }
        else{
            printf("Opcao invalida!\n");
        }

    } while (opcao !=3);


    return 0;
}