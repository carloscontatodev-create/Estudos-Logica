#include <stdio.h>

int main(){

    int valor, produto;
    float total, total1;

    printf("Digite a quantidade de produtos que ira comprar: \n");
    scanf("%d", &produto);
    printf("Digite o valor de cada produto: \n");
    scanf("%d", &valor);
    
    total = produto*valor;

    if(produto>10){
    total1 = total-(total/100*5);
    } else{
    total1 = total;
    }

    printf("O valor total e: %.1f \n",total1);




    return 0;
}