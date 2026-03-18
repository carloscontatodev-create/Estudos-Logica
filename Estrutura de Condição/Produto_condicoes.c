#include <stdio.h>

int main(){

    float valor, valorfinal;
    int condicao, desconto1, desconto2, juros;

    printf("Digite o valor do produto: \n");
    scanf("%f", &valor);
    printf("Escolha o numero da forma de pagamento desejada: 1 - A vista, 2 - Credito a vista, 3 - Parcelado(2x), 4 - Parcelado(3x+)");
    scanf("%d", &condicao);

    if (condicao>4){
        printf("Por favor escolha um valor entre 1 a 4!");
    }
    else{
        
        desconto1 = 15;
        desconto2 = 5;
        juros = 10;
        
        if (condicao == 1){
            valorfinal = valor-(valor/100*desconto1);
        }
        else if (condicao == 2){
            valorfinal = valor-(valor/100*desconto2);
        }
        else if (condicao == 4){
            valorfinal = valor+(valor/100*juros);
        }
        else{
            valorfinal = valor;
        }

        printf("O valor do produto será de: %f", valorfinal);

    }

    return 0;
}