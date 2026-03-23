#include <stdio.h>

int main(){

    int contador=0;
    float pesoInicial, pesoSemanal, pesoDesejado;

    printf("Ola Jogador, digite o peso no qual deseja alcancar \n");
    scanf("%f", &pesoDesejado);
    printf("-- Bem-Vindo a sua Jornada aos %.1fkg \n", pesoDesejado);
    printf("Digite o seu peso atual: \n");
    scanf("%f", &pesoInicial);

    do{
        contador++;
        printf("Digite o peso desta semana: \n");
        scanf("%f", &pesoSemanal);
        
    } while (pesoSemanal!=pesoDesejado);
    
    printf("Parabens voce conseguiu chegar ao peso desejado, voce gastou um total de %d semanas para conseguir. \n", contador);





    return 0;
}