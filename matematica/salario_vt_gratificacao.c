#include <stdio.h>

int main(){

    float salario, gratifica, vt;

    printf("Digite o seu salario base: \n");
    scanf("%f", &salario);

    vt = salario + 250;
    gratifica = (salario/100*10)+vt;
    
    printf("O seu salario liquido final e de %.2f \n", gratifica);
    
    return 0;
}