#include <stdio.h>

int main(){

    int idade;

    printf("Qual sua idade: \n");
    scanf("%d", &idade);

    if (idade<16){
        printf("Nao vota!");
    }
    else if (idade>=16 && idade<=17 || idade>=70){
        printf("Voto opcional!");
    }
    else{
        printf("Voto Obrigatorio!");
    }
    return 0;
}