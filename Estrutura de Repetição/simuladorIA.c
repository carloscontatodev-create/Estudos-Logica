#include <stdio.h>

int main(){

    int epoca, lote;

    printf("Digite um numero de epocas desejadas: \n");
    scanf("%d", &epoca);
    printf("Digite um quantidade de lotes por epoca desejadas: \n");
    scanf("%d", &lote);
    
    for (int i=1; i<=epoca; i++){

        printf("Inciando Epoca %d.\n", i);
        for (int z=1; z<=lote; z++){
            printf("Processando Lote %d.\n", z);
        }


    }












    return 0;
}