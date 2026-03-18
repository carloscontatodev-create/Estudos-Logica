#include <stdio.h>

int main(){

    int nota;

    while (nota<0 || nota>10){

        printf("Digite a nota: \n");
        scanf("%d", &nota);
        
    }

    return 0;
}