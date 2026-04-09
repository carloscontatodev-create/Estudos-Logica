#include <stdio.h>

int main(){

        float n1, nota, media, soma, n, menor;

        printf("Digite a n1: \n");
        scanf("%f", &n1);



        for (int i=1;i<=1;i++){
            printf("Digite a n2: \n", n);
            scanf("%f", &nota);

            soma = n1+nota;
            media = soma/2;

            if (media>=6){
                printf("Aprovado");
           }
           else{
            menor = n1;
            if (nota<menor){
                menor = nota;
            }
            printf("Digite a nota da n3: \n");
            scanf("%f", &n);

            soma = menor+n;
            media = soma/2;

            if (media>=6){
                printf("Aprovado");
            }
            else{
                printf("Reprovado!");
            }
           }
        }

        printf("A media foi %.1f \n", media);

    return 0;
}