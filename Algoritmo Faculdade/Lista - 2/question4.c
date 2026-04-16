#include <stdio.h>

int main(){

    int mmc, n1, n2, maior;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);

    maior = n1;

    if (n2>maior){
        maior = n2;
    }

    mmc = maior;

    while (mmc % n1 != 0 || mmc % n2 != 0){
        mmc += maior;
    }

    printf("O mmc e %d", mmc);

    system("pause");
    return 0;
}