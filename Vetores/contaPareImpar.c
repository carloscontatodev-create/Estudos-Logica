#include <stdio.h>

int main(){

    int numeros[6];
    int contaPar=0, contaImpar=0;

    for (int i=0;i<=5;i++){
        printf("Digite o %d numero: \n", i+1);
        scanf("%d", &numeros[i]);

        if (numeros[i]%2==0){
            contaPar++;
        }
        else{
            contaImpar++;
        }
    }
    
        printf("Tem um total de %d numeros pares. \n", contaPar);
        printf("Tem um total de %d numeros impares. \n", contaImpar);
        
    return 0;
}