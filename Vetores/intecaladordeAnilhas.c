#include <stdio.h>

int main(){

    int barra[6];
    int ladoDireito[3] = {10, 20, 30};
    int ladoEsquerdo[3] = {15, 25, 35};

    for (int i=0;i<=2;i++){
        barra[i*2] = ladoDireito[i];
        barra [i*2+1] = ladoEsquerdo[i];
    }

    for (int j=0;j<=5;j++){
        printf("%d", barra[j]);
    }








    return 0;
}