#include <stdio.h>

int main(){

    int nota, media=1, soma=0, j=10, z=0;

    for (int i=1;i<=5;i++){
        z++;
        printf("Digite a %d nota: \n",z);
        scanf("%d", &nota);
    
        while(nota<0 || nota>10){
            printf("Digite a nota novamente: \n");
            scanf("%d", &nota);
        }
        
        soma = soma+nota;

    }

    media = soma/5;

    printf("A media e: %d \n", media);

    return 0;
}