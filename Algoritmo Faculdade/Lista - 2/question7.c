#include <stdio.h>

int main(){

    int contador=0;
    int nSecreto = 72;
    int numero;

    printf("-- Seja Bem-Vindo Ao Jogo do Acerto !! --\n");
    printf("------------------------------------------------\n");
    
    do{

    printf("Por favor, digite um numero ate acertar o correto! (1-100) \n");
    scanf("%d", &numero);

        if (numero>=45 && numero<=63){
            printf ("Esta frio\n");
        }
        else if (numero>65 && numero<=71){
            printf("Esta quente!\n");
        }
        else if (numero>=73 && numero<=82){
            printf("Esta quente!\n");
        }
        else if (numero>82 && numero<=100){
            printf("Esta frio");
        }
        else if (numero>=1 && numero<=44){
            printf("Esta congelando!");
        }



        contador++;
    } while (numero!=nSecreto);

    printf("------------------------------------------------\n");

    printf ("Parabens!!! Você acertou o numero secreto! \n");
    printf ("Voce teve um total de %d tentativas! \n", contador);

    system("pause");
    return 0;
}