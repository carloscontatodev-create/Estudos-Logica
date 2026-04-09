#include <stdio.h>

int main(){

    int temp1, temp2, temp3, temp4;
    int valores[3];
    
    for (int i=0;i<=2;i++){
        printf("Digite o %d valor: \n", i+1);
        scanf("%d", valores[i]);
    }

    //trocas
    temp1 = valor[3];
    temp2 = valor[2];
    temp3 = valor[1];
    temp4 = valor[0];
    //0
    valor[0] = temp1;
    //1
    valor[1] = temp2;
    //2
    valor[2] = tem3;
    //3
    valor[3] = temp4


    return 0;
}