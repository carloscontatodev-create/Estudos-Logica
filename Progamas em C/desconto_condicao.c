#include <stdio.h>

int main(){

    float valor, final, taxa1, taxa2;

    printf("Digite o valor da compra: \n");
    scanf("%d", &valor);

    taxa1 = 10;
    taxa2 = 20;

    if(valor>=200 && valor<=500){
        final = valor-(valor/100*taxa1);
    }
    if(valor>500){
        final = valor-(valor/100*taxa2);
    }

    printf("O valor final foi de: %.1f \n", final);

    return 0;
}