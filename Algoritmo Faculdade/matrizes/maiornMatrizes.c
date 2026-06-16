#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[4][4];
    int maior;
    
    for (int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            printf("Digite o valor da matriz da posicao [%d][%d]\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];
    for (int i=0;i<=3;i++){
        for (int j=0;j<=3;j++){
            if (matriz[i][j]>maior){
                maior = matriz[i][j];
            }
        }
    }

    printf("Valores da matriz\n");
    for(int i=0;i<=3;i++){
        for (int j=0;j<=3;j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<=3;i++){
        for (int j=0;j<=3;j++){
            printf("[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }

    printf("O maior numero da matriz e: %d\n", maior);




    return 0;
}
