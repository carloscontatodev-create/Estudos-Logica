#include <stdio.h>

int main(){

    float gastocarro, distancia, preco, litro, total;

    printf("Digite a distancia da viagem: \n");
    scanf("%f", &distancia);
    printf("Qual o valor da gasolina por litro: \n");
    scanf("%f", &preco);

    gastocarro = 12;
    litro = distancia/gastocarro;
    total = litro*preco;

    printf("Serao gasto na viagem %.1f\n",litro);
    printf("O custo total sera de: %.1f\n",total);
    return 0;
}