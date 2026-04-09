#include <stdio.h>

int main(){

    int contador[4] = {0, 0, 0, 0};
    int vendas[10] = {1, 1, 1, 1, 2, 3, 2, 3, 2, 1};

    for (int i=0;i<=9;i++){
        contador[vendas[i]]++;
    }

    for (int j=1;j<=3;j++){
        printf("A quantidade vendidas do lanche %d, foi de: %d\n", j, contador[j]);
    }

    return 0;
}