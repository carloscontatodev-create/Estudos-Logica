#include <stdio.h>

int main(){

    int soma, num;


    for (int i=1;i<=40;i++){
    printf("Digite o numero %d: \n", i);
    scanf("%d", &num);
    soma += num;
    }
    printf("%d", soma);

    return 0;
}