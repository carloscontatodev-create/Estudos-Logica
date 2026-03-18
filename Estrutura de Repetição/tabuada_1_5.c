#include <stdio.h>

int main(){

    int tabuada, produto, a;


    for (int i=1;i<=5;i++){
        printf("Tabuada %d\n", i);

        for(int j=1;j<=10;j++){
            produto = i*j; 
            printf("%dx%d=%d\n",i,j, produto);
        }
        


    }



    return 0;
}