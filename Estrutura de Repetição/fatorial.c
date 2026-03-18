#include <stdio.h>

int main(){

    int fatorial, num;

    printf("Digite um numero que deseja pegar a fatorial: \n");
    scanf("%d", &num);

    fatorial = 1;

    for (int i=num;i>=1;i--){
        fatorial = fatorial*i;
       
    }

    printf("%d\n", fatorial);

    return 0;
}