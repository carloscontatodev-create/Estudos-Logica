#include <stdio.h>

int main(){

    int secreto=91, palpite, tentivas=0;

    printf("-- Seja, Bem-Vindo! Mini-Jogo de Advinhacao \n");
    printf("Digite numeros ate acertar o numero secreto!");

    printf("Digite um numero: \n");
    scanf("%d", palpite);

    while (palpite != secreto){
        tentivas++;

        if (palpite>91 && = palpite<100){
            printf("Esta perto!");
        }
        else if (palpite>=80 && palpite<=90){
            printf("Esta perto!");
        }
        else if (palpite<80 && palpite>=0){
            printf("Muito baixo");
        }
    }   

    printf("Voce teve um total de %d tentativas ate acertar", tentivas);

    return 0;
}