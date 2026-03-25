#include <stdio.h>

int main(){

    int reps, carga, volumeTotal=0, contador;

    do {
        
        printf("Digite a carga do exercicio\nOu, digite 0 para finalizar o exercicio.\n");
        scanf("%d", &carga);


    
        printf("Quantas repetições ?");
        scanf("%d", reps);
        volumeTotal = volumeTotal+reps*carga;

        contador++;
    } while (carga != 0);

    printf("Foi feito um total de %d series.", contador);
    printf("Teve um total de %d em kg de volume total.", volumeTotal);
    return 0;
}