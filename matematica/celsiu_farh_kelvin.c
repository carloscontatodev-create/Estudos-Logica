#include <stdio.h>

int main(){

    float celsius, farh, kelvin;

    printf("Digite a temperatura em celsius: \n");
    scanf("%f", &celsius);

    farh = celsius*1.8+32;
    kelvin = (farh+459.67)*5/9;
    
    if (kelvin<0){
        kelvin = -kelvin;
    }
    
    printf("A temperatura em Celsius e: %.1f \n",celsius);
    printf("A temperatura em Fahrenheit e: %.1f \n",farh);
    printf("A temperatura em Kelvin e: %.2f \n",kelvin);

    return 0;
}