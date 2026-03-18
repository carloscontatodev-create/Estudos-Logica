#include <stdio.h>

int main(){

    float km, m, cm, mm;

    printf("Digite quantos km que deseja converter:\n");
    scanf("%f", &km);
    
    m = km*1000;
    cm = km*100000;
    mm = km*1000000;

    printf("Convetido em metros fica: %.0f\n", m);
    printf("Convetido em metros fica: %.0f\n", cm);
    printf("Convetido em metros fica: %.0f\n", mm);

    return 0;
}