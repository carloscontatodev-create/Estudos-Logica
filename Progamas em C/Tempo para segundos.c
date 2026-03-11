#include <stdio.h>

int main(){

    int hora, min, segundo, con, bc ;
    printf("Digite a quantidade de horas desejada:\n");
    scanf("%d", &hora);
    printf("Digite a quantidade de minutos desejado:\n");
    scanf("%d",  &min);
    printf("Digite quantos segundos deseja:\n");
    scanf("%d", &segundo);
    
    con = hora*3600;
    bc = min*60;

    printf("O tempo de horas para segundo e igual a: %.d\n", con);
    printf("O tempo de minutos para segundo e igual a: %.d\n", bc);
    printf("O tempo de segundos para segundo e igual a: %.d\n",segundo);

    return 0;
}