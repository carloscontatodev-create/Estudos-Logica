#include <stdio.h>

int main(){

    float pesos[5];

    for (int i=0;i<=4;i++){
        printf("Digite o %d numero: \n", i+1);
        scanf("%f", &pesos[i]);

        if (peso[i]<0){
            pesos[i] = 0;
        }
    }

    for (int j=0;j<=4;j++){
        printf("O %d peso foi: %dkg", j, peso[j]);
    }


    return 0;
}