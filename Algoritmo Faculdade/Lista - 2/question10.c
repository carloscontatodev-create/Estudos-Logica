#include <stdio.h>

int main(){

    int fatorial=1, numero, soma=0;

    printf("Digite um numero que deseja pegar a fatorial: \n");
    scanf("%d", &numero);

    for (int i=numero;i>=1;i--){
    fatorial = fatorial*i;
    }

    printf("%d\n", fatorial);

    system("pause");
    return 0;
}