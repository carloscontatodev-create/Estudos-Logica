#include <stdio.h>

int main(){

    int soma=0;

    for (int i=0;i<=6;i++){
        soma = soma + (4 + i);
    }

    printf("%d", soma);

    system("pause");
    return 0;
}