#include <stdio.h>

int main(){

    int num, qntmen, somamaio;

    somamaio = 0;
    qntmen = 0;
    for (int i=1;i<=5;i++){
        printf("DIgite um numero: \n");
        scanf("%d", &num);

        if(num>10){
            somamaio = somamaio+num;
        }
        else{
            qntmen = num+1;
        }
    }

    printf("A soma dos maiores de 10 e: %d \n", somamaio);
    printf("Tem um total de %d menores que 10", qntmen);




    return 0;
}