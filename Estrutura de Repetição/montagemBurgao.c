#include <stdio.h>

int main(){

    int contadorExtras=0, opcao, opcao1;
    float carrinho=0;

    printf("-- Bem-Vindo, Ao monte seu hamburguer --\n");
    do{
        printf("1. Inciciar Montagem\n2. Finalizar\n");
        scanf("%d", &opcao);

        if (opcao>2){
            printf("Por favor escolha um numero valido!\n");
        }
        if (opcao==1){
            printf("O valor incial (Pao) e de R$ 10,00\n");
            carrinho += 10;
            do{
                printf("Deseja adicionar mais coisas ao seu lanche ?\n");
                printf("1. Carne 150g (R$ 10,00)\n");
                printf("2. Bacon (R$ 5,00)\n");
                printf("3. Queijo Prato (R$ 5,00)\n");
                printf("4. Cheddar (R$ 5,00)\n");
                printf("5. Cebola Empanada (R$ 5,00)\n");
                printf("6. Finalizar\n");

                scanf("%d", &opcao1);

                if (opcao1==1){
                    carrinho += 10; 
                }
                else if (opcao1==2){
                    carrinho += 5; 
                }
                else if (opcao1==3){
                    carrinho += 5; 
                }
                else if (opcao1==4){
                    carrinho += 5; 
                }
                else if (opcao1==5){
                    carrinho += 5; 
                }
                else if (opcao1>6){
                    printf("Por favor seleciona um valor valido\n");
                }
                if (opcao1>=1 && opcao1<==5){
                    contadorExtras++;
                }

            } while (opcao1!=6);
        
        }

    } while (opcao!=2);

    if (carrinho<=0){
        printf("Por favor adicione algo ao carrinho.\n");
    }
    else{
        printf("O valor total do pedido foi de: %.2f\n", carrinho);
    }





    return 0;
}