#include <stdio.h>

int main(){

    float n1, n2, n3, n4;
    float p1, p2, p3, p4;
    float media, media1, total;

    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite o primeiro peso: \n");
    scanf("%f", &p1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);
    printf("Digite o segundo peso: \n");
    scanf("%f", &p2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &n3);
    printf("Digite o terceiro peso:: \n");
    scanf("%f", &p3); 
    printf("Digite a quarta nota: \n");
    scanf("%f", &n4);
    printf("Digite o quarto peso: \n");
    scanf("%f", &p4);

    media = (n1*p1)+(n2*p2)+(n3*p3)+(n4*p4);
    total = p1+p2+p3+p4;
    media1 = media/(p1+p2+p3+p4);

    printf("A media e igual a: %.2f \n", media1);
    printf("A somatoria dos produtos e: %.1f \n",media);
    printf("O total dos pesos e: %.1f \n",total);

    return 0;
}