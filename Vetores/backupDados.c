#include <stdio.h>

int main(){

    int copia[5];
    int dados[5]={10,20,30,40,50};

    for (int i=0;i<=4;i++){
        copia[i] = dados[i];
   }

   for (int j=0;j<=4;j++){
    printf("Os dados salvados na copia sao %d\n", copia[j]);
   }



    return 0;
}