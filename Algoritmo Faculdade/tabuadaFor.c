#include <stdio.h>

int main(){

    int num, multi;

    printf("Digite o numero da tabuada que desejar pegar: \n");
    scanf("%d", &num);

    for (int i=1;i<=10;i++){
        multi = num*i;
        printf("%dx%d = %d\n", num, i, multi);
    }

    return 0;
}