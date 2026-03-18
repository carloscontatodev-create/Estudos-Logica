#include <stdio.h>

int main(){

    int num, produto;

    printf("Digite o numero que seja pegar a tabuada: \n");
    scanf("%d", &num);

    for (int i=1; i<=10; i++){
    produto = num*i;
    printf("%dx%d=%d\n", num, i, produto);    
    }

    return 0;
}