#include <stdio.h>

int main(){

    float dollar, real, conversa, sobra;

    printf("Quantos dollares deseja converter: \n");
    scanf("%f", &dollar);
    printf("Qual o valor atual do Dollar em Real ? \n");
    scanf("%f",&real);

    conversa = dollar*real;
    sobra = conversa/2;

    printf("O valor em real e: %.1f \n", conversa);
    printf("Apos gastar metade do valor, em reais, sobrara: %.1f \n",sobra);




    return 0;
}
