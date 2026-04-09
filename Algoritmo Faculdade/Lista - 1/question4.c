#include <stdio.h>

int main(){

    float n1, n2, resul;
    int operacao;

    printf("Escolha a operacao desejada:\n1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n");
    scanf("%d", &operacao);

    if (operacao==>=5){
        printf("Selecione um numero valido por favor!");
    } 
    else if (operacao==1){
        resul = n1+n2;
    }
    else if (operacao==2){
        resul = n1-n2;
    }
    else if (operacao==3){
        resul = n1*n2;
    }
    else{
        resul = n1/n2;
    }
    
    printf("O resultado da operacao e igual a: %.2f", resul);



    return 0;
}