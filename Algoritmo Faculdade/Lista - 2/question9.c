#include <stdio.h>

int main(){

    float mb, mbps, velocidade;
    int minutos, segundos, tempo;

    printf("Digite o tamanho do arquivo em MB: \n");
    scanf("%f", &mb);
    printf("Digite a velocidade de um link de internet em MBPS: \n");
    scanf("%f", &mbps);

    velocidade = mbps*0.125;  
    tempo = (int) (mb/velocidade);

    minutos = tempo/60;
    segundos = tempo%60;

    printf("------------------------------------------------\n");
    printf("%.2d -Minutos.\n%.2d -Segundos.\n", minutos, segundos);
    printf("------------------------------------------------\n");
    
    system("pause");
    return 0;
}