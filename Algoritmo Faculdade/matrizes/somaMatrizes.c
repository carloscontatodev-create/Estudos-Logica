#include <stdio.h>
#include <stdlib.h>


int main(){

    int A[3][3], B[3][3], C[3][3];

    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("Digite os valores da matriz A: \n", i+1);
            scanf("%d", &A[i][j]);
        }
    }
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("Digite os valores da matriz B: \n", i+1);
            scanf("%d", &B[i][j]);
        }
    }
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            C[i][j] = A[i][j]+B[i][j];
        }
    }
//////////////////////
    printf("Matriz A\n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("%d", A[i][j]);
        }
        printf("\n");
    }
    printf("Matriz B\n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("%d", B[i][j]);
        }
        printf("\n");
    }

    printf("Matriz C\n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("%d", C[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
