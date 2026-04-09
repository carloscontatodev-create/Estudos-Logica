#include <stdio.h>

int main(){

    int resul=0;

    for (int i=2;i<=10;i++){

        for (int j=1;j<=10;j++){
            resul = j*i;
            printf("%d x %d = %d\n", i, j, resul);
        }
        printf("\n");
    }

    return 0;
}