#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;
    float delta, bhaskara, raizes, x1, x2;

    printf("Digite o valor de A: \n");
    scanf("%d", a);
    printf("Digite o valor de B: \n");
    scanf("%d", b);
    printf("Digite o valor de C: \n");
    scanf("%d", c);

    delta = pow(b,2)-4*a*c;

    if (delta<0){
        printf("Possui nenhuma raiz real");
    }
    else{

        if (delta>0){
            printf("Possui duas raizes reais");
            x1 = (-b+sqrt(delta))/2*a;
            x2 = (-b-sqrt(delta))/2*a;
            printf("É são elas %f e %f \n", x1, x2);
        }
        else if (delta == 0){
            printf ("Possui uma raiz real");
            x1 = (-b+sqrt(delta))/2*a;
            x2 = (-b-sqrt(delta))/2*a;

            if (x1>0){
                printf("A raiz real é %f \n", x1);
            }
            if (x2>0){
                printf("A raiz real e %f \n", x2);
            }

        }

        
    }
    
    printf("O valor de Delta e: %.1f \n", delta);


    return 0;
}