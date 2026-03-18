#include <stdio.h>

int main(){

    float valor, venda;

    printf("Digite o valor da venda: \n");
    scanf("%f", &valor);

    if (valor<20){
        venda = valor*0.45+valor;
    }
    else{
        venda = valor*0.30+valor;
    }

    printf("O valor da venda sera de: %.1f", venda);

    return 0;
}