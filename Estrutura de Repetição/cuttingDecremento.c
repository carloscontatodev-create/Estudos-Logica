#include <stdio.h>

int main(){

    int meta, deficit;

    printf("Digite a meta de calorias que voce deseja perder.\n");
    scanf("%d", &meta);

    do {

        printf("Qual foi seu gasto de hoje: \n");
        scanf("%d", &deficit);

        meta -= deficit;
        if (meta<=0){
            break;
        }
        else{
        printf("Ainda faltam %d para completar a meta.\n", meta);
        }
    } while (meta>0);

    printf("Parabens voce completou a meta desejada.\n");






    return 0;
}