#include <stdio.h>

int main(){

    float escolha, litros, valor, valor2, desconto;

    printf("Qual voce deseja escolher: 1 - alcool ou 2 - gasolina \n");
    scanf("%f", &escolha);

    if (escolha>2){
        printf("Por favor digite um numero entre 1 e 2");
    }
    else{
        
        valor = 6;
        printf("Quantos litros deseja colocar ? \n");
        scanf("%f", &litros);

        if(escolha==1){
            
            if (litros<=20){
                desconto = valor-(valor/100*3);  
            }
            else{
                desconto = valor-(valor/100*5);
            }
        }
        if(escolha==2){

            if (litros<=20){
                desconto = valor-(valor/100*4);
            }
            else{
                desconto = valor-(valor/100*6);
            }
        }
        valor2 = litros*valor-desconto;
        printf("Voce pagara um total de: %.0f \n", valor2);

    }

    return 0;
}