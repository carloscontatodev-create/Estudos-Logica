#include <stdio.h>

int main(){

    int original;
    float desconto1, desconto2;

    printf("Digite o valor original do produto: \n");
    scanf("%d", &original);
    
    desconto1 = original-(original/100*20);
    desconto2 = desconto1-(desconto1/100*10);

    printf("Após os descontos o valor do produto passou a ser %.1f\n",desconto2);


    return 0;
}