#include <stdio.h>

int main(){

    int base, altura, perimetro, area;

    printf("Digite a altura do retangulo \n");
    scanf("%d", &altura);
    printf("Digite a base do retangulo \n");
    scanf("%d", &base); 
    
    perimetro = (base*2)+(altura*2);
    area = base*altura;

    printf("A area sera de: %d, e o perimetro sera de: %d \n", area, perimetro);


    return 0;
}