#include <stdio.h>

int main(){

    int calorias[7];
    int menor;
    

    for (int i=0;i<=6;i++){
        printf("Digite a caloria de hoje: \n");
        scanf("%d", &calorias[i]);
        
    }

     menor = calorias[0];

    for (int j=0;j<=6;j++){
        
        if (calorias[j]<menor){
            menor = calorias[j];
        }

        printf("As calorias do dia %d, foi de %d\n", j+1, calorias[j]);
    }
    
    printf("O dia mais restrito foi %d\n", menor);


    return 0;
}