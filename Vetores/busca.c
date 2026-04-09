#include <stdio.h>

int main(){

    int estoque[5]={10, 25, 30, 35, 40};
    int busca, encontrado=0; 

    printf("Digite um codigo para acesar o estoque: \n");
    scanf("%d", &busca);
    
    for (int i=0;i<=4;i++){
        
        if (estoque[i]==busca){
            printf("Item Encontrado na gaveta %d\n", i+1);
            encontrado = 1;
        }
        else{
            printf("Item nao Encontrado!\n");
        }
    }



    return 0;
}