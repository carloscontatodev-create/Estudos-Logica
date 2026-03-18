#include <stdio.h>

int main(){

    float n1, n2, n3, media, menor;

    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);

    media = (n1+n2)/2;

    if(media>=7){
        printf("Aprovado!");
    }
    else{

        printf("Digite a terceira nota: \n");
        scanf("%f", &n3);

        menor = n1;

        if(n2<menor){
            menor = n2;
        }
    
        media = (menor+n3)/2
        
        if (media>=7){
            printf("Aprovado!");
        }
        else{
            printf("Reprovado!");
        }

    }

    return 0;
}