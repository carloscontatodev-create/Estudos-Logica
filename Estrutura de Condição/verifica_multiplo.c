#include <stdio.h>

int main(){

    int n1, n2;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero \n");
    scanf("%d", &n2);

    if(n1%n2 == 0 || n2%n1 == 0){
        printf("Sao multipos \n");
    }
    else{
        printf("Nao sao multiplos \n");
    }


    return 0;
}