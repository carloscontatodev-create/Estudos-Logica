#include <stdio.h>

int main(){

    int base, altura;
    float area;

    printf("Digite a base do triangulo:\n");
    scanf ("%d",&base);
    printf("Digite a altura do triangulo:\n");
    scanf("%d", &altura);

    area = (base*altura)/2;

    printf("A area desse triangulo e: %.0f \n",area);





    return 0;
}