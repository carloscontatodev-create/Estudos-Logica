#include <stdio.h>

int main(){

    int numero;

    printf("Digite o numero de andares da piramide: \n");
    scanf("%d", &numero);

    for (int i=1;i<=numero;i++){

        for (int j=1;j<=(numero-i);j++){
            printf(" ");
            }
        for (int z=1;z<=(2*i-1);z++){
        printf("*");

        }
        
        printf("\n");

    }

    return 0;
}