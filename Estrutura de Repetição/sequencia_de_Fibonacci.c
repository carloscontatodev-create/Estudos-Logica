#include <stdio.h>

int main(){

    int anterior, atual, proxima, num, soma=0;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    anterior = 0;
    atual = 1;

    for(int i=1;i<=num;i++){
        
        soma = soma+anterior;
        printf("%d\n", anterior);
        proxima = anterior+atual;
        anterior = atual;
        atual = proxima;
        

    }

    printf("A soma de tudo e: %d\n", soma);

    return 0;
}