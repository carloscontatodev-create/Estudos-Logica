#include <stdio.h>

int main(){

    float preco, total, valor;

    while (preco != 0){
        printf("Digite o valor do produto: \n");
        scanf("%f", preco);

        total = total+preco;

    }

    printf("O preço total da compra foi de: %1.f \n", total);






    return 0;
}