#include <stdio.h>

int main(){

    int q1, q2, q3, q4, x, y;

    printf("Digite o valor de X do plano cartesiano: \n");
    scanf("%d", &x);
    printf("Digite o valor de Y do plano cartesiano: \n");
    scanf("%d", &y);

    if (x>0 && y>0){
        printf("Primeiro quadrante");
    }   
    else if (x>0 && y<0){
        printf("Quarto quadrante");
    }
    else if (x<0 && y>0){
        printf("Segunda quadrante");
    }
    else if (x<0 && y<0){
        printf("Terceiro Quadrante");
    }


    return 0;
}