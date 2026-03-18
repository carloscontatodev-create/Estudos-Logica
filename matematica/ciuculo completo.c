#include <stdio.h>
#include <math.h>

int main(){

        double perimetro, diametro, raio, area, pi;

        printf("Digite o raio da circunferencia: \n");
        scanf("%lf",&raio);

        pi = 3.14;
        diametro = 2*raio;
        perimetro = pi*2*raio;
        area = pow(raio,2)*pi;

        printf("O diametro e %.1lf\n",diametro);
        printf("D perimetro e %.1lf\n",perimetro);
        printf("A area e: %.1lf\n",area);






    return 0;
}