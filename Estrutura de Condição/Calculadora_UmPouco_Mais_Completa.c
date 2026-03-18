#include <stdio.h>
#include <math.h>

int main()
{

    float n1, n2, operacao, soma, subtracao, multiplicacao, valorpor, taxa;
    float divisao, potencia, raiz, porcentagem, res1, res2, valorraiz;

    // Escolha do Operador
    printf("\nEscolha o numero da operacao desejada: 1 - Soma, 2 - Subtracao, 3 - Multiplicacao, 4 - Divisao, 5 - Potencia, 6 - raiz, 7 - Porcentagem \n");
    scanf("%f", &operacao);

    // Porcentagem

    if (operacao == 7)
    {
        printf("Escolha um valor: \n");
        scanf("%f", &valorpor);
        printf("Esocolha o numero no qual você deseja: 1 - Incrementar ou 2 -Diminuir: \n");
        scanf("%f", &res1);
        printf("Qual a porcentagem desejada ?\n");
        scanf("%f", &taxa);

        if (res1 == 1)
        {
            res1 = (valorpor / 100 * taxa) + valorpor;
        }
        if (res1 == 2)
        {
            res1 = valorpor - (valorpor / 100 * taxa);
        }
        if (res1 > 3)
        {
            printf("Por favor escolha um numero de 1 a 2! \n");
        }
        printf("O valor sera de: %f \n", res1);
    }

    // Raiz Quadrada
    else
    {
        if (operacao == 6)
        {
            printf("Escolha um valor: \n");
            scanf("%f", &valorraiz);
            res1 = sqrt(valorraiz);
            printf("O resultado e: %.3f \n", res1);
        }

        else
        {

            // Primeiro Valor

            printf("\nPrimeiro valor: ");
            scanf("%f", &n1);

            // Segundo Valor

            printf("\nSegundo valor");
            scanf("%f", &n2);

            // Soma

            if (operacao == 1)
            {
                res1 = n1 + n2;
            }

            // Subtração

            if (operacao == 2)
            {
                res1 = n1 - n2;
            }

            // Multiplicação

            if (operacao == 3)
            {
                res1 = n1 * n2;
            }

            // Divisão

            if (operacao == 4)
            {
                res1 = n1 / n2;
            }

            // Potência

            if (operacao == 5)
            {
                res1 = pow(n1, n2);
            }

            // Resultado

            printf("O resultado e: %.3f \n", res1);
        }
    }
    return 0;
}