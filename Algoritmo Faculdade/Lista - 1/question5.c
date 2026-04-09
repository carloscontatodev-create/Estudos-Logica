#include <stdio.h>

int main(){

    int num = 100, anterior=0, atual=1, proximo=0;

    for (int i=1;i<=num;i++){

        printf("%d\n", anterior);
        proximo = anterior+atual;
        anterior = atual;
        atual = proximo;
    }

    return 0;
}