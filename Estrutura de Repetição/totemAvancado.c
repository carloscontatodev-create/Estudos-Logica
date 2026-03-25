#include <stdio.h>

int main(){

    int carrinho, opcao, opcao1;

    do {

        printf("1. Montar Hamburguer\n2. Fechar Pedido.");
        scanf("%d", opcao);
        
        if (opcao>2){
            printf("Por favor, digite um numero valido.");
        }
        if (opcao==1){
            carrinho += 20;
            do{
                printf("Deseja Extras ?\n1.Bacon (R$ 3,00)\n2.Cheddar (R$ 3,00)\n3. Fechar.\n");
                scanf("%d", opcao1);
                
                if (opcao1==1){
                    carrinho += 3;
                }
                else if (opcao1==2){
                    carrinho += 3;
                }
                
            } while (opcao1 !=3 );
        }







    } while (opcao!=2);


    return 0;
}