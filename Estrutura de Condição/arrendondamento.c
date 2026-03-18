#include <stdio.h>

int main(){

    float valor;
    int valorarrendodado;

    printf("Digite um valor com casas decimais que deseja arrendondar: \n");
    scanf("%f", &valor);

    valorarrendodado = (int)valor;

    if (valor>valorarrendodado){
        valorarrendodado = valorarrendodado+1;
    }

    printf("O valor apos o arrendodamento ficou: %d", valorarrendodado);
    




    return 0;
}