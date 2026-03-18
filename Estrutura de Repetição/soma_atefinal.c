#include <stdio.h>

int main(){

    int n1, n2, soma=0, temp;


    printf("Digite um numero: \n");
    scanf("%d", &n1);
    printf("Digite um numero: \n");
    scanf("%d", &n2);

    if (n2<n1){
    temp = n2;
    n2 = n1;
    n1 = temp;
    
    }

    for (int i=n1;i<=n2;i++){
        soma = soma+i;
    }

    printf("%d", soma);

    return 0;
}