#include <stdio.h>

int main(){

    int fixo;
    float variavel, total, acesso;

    printf("Qual o valor da taxa fixa: \n");
    scanf("%d", &fixo);
    printf("Qual foi a quantidade de acessos mensais: \n");
    scanf("%f", &acesso);

    variavel = acesso/1000;
    
    if(acesso<=999){
        total = fixo;
    } else{
        total = variavel*0.5+fixo;
    }

    printf("O custo total foi de: %.2f \n", total);

    return 0;
}