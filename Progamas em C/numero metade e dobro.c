#include <stdio.h>

int main(){

    float numero, dobro, metade;

    printf("Digite algum numero: \n");
    scanf("%f",&numero);
    
    dobro = numero*2;
    metade = numero/2;

    printf("O dobro do seu numero e: %.1f\n",dobro);
    printf("A metade do seu numero e: %.1f\n",metade);




    return 0;
}