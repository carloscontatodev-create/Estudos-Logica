#include <stdio.h>

int main(){

    int n1, n2, n3, menor;
    float media;

    for (int i = 1; i <= 3; i++){

        printf("Aluno %d\n", i);

        printf("Digite a primeira nota: \n");
        scanf("%d", &n1);

        printf("Digite a segunda nota: \n");
        scanf("%d", &n2);

        media = (n1+n2)/2;

        if (media >= 6){
            printf("Aprovado\n");
        } else {
            printf("Digite a terceira nota: \n");
            scanf("%d", &n3);

            menor = n1;
            if (n2 < menor){
                menor = n2;
            }

            media = (menor + n3) / 2.0;

            if (media >= 6){
                printf("Aprovado\n");
            } else {
                printf("Reprovado\n");
            }
        }

        printf("A sua media foi %.1f\n", media);
    }

    return 0;
}