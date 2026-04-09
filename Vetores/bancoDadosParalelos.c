#include <stdio.h>

int main(){

    int busca;
    int id[3];
    float peso[3];
    int bandeira=0;

    for (int i=0;i<=2;i++){
        printf("Digite seu ID: \n");
        scanf("%d", &id[i]);
        printf("Digite seu PESO: \n");
        scanf("%f", &peso[i]);
    }

    printf("Digite o ID de jogar que voce deseja procurar: \n");
    scanf("%d", busca);

    for (int j=0;j<=2;j++){
        
        if (id[j]==busca){
            printf("ID %d encontrado! Peso do jogador e %.2f. \n", id[j], peso[j]);
            bandeira = 1;
            break;
        }
    }

    if (bandeira==0){
        printf("ID nao encontrado!");
    }



    return 0;
}