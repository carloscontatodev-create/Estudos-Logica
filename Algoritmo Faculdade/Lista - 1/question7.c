#include <stdio.h>

int main(){

    int numero, contador=0;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    for (int i=1;i<=numero;i++){
        if (numero%i==0){;
            contador++;
        }
    }

    if (contador==2){
        printf("Primo!");
    }
    else {
        printf("Nao e primo!");
    }
;
    return 0;
}