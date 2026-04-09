#include <stdio.h>

int main(){

    int estoque[15] = {10, 20, 10, 30, 10, 40, 50, 10, 20, 30, 50, 50, 40, 10, 40};
    int acumula=0, busca=0;

    printf("Digite o ID do item (10, 20, 30, 40 ou 50)\n");
    scanf("%d", &busca);
    
    for (int i=0;i<=14;i++){

        if (estoque[i]==busca){
            acumula++;
        }

    }

    printf("Temos %d unidades do produto %d no estoque.\n", acumula, busca);

    return 0;
}