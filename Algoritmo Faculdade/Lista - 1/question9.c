#include <stdio.h>

int main(){

    int somaTotal=0;

    for (int i=0;i<=6;i++){

        for (int z=i;z<=6;z++){
            somaTotal += (i+z);
            printf("Peça: (%d|%d), tem a uma soma acumulada de %d.\n", i, z, somaTotal);
        }
        printf("\n");
    }

    printf("A soma de todas pedras e igual a: %d\n", somaTotal);


    return 0;
}