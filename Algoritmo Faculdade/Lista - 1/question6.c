#include <stdio.h>

int main(){

    int num, soma=0;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    for (int i=1; i<num; i++){
        if (num % i == 0){
        soma += i;
        }
    }

    if (soma == num){
        printf("Perfeito");
    }
    else {
        printf("Nao e perfeito");
    }


    return 0;
}