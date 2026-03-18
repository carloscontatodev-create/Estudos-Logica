#include <stdio.h>

int main(){

    int hora, minuto;

    printf("Digite um quantidade de horas: \n");
    scanf("%d", &hora);
    printf("Digite uma quantidade de minutos: \n");
    scanf("%d", &minuto);

    if (hora>=0 && hora<=23){
        printf("Hora valida.\n");
    }
    else{
        printf("Hora invalida\n");
    }
    if(minuto>=0 && minuto<=59){
        printf("Minutos validos\n");
    }
    else{
        printf("Minutos invalidos\n");
    }

    return 0;
}