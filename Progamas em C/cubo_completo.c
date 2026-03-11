#include <stdio.h>
#include <math.h>

int main(){

    float volume, lado, aretotal;

    printf("Digite o lado desse cubo: \n");
    scanf("%f", &lado);

    volume = pow(lado, 3);
    aretotal = pow(lado, 2)*6;

    printf("O volume desse cubo e: %.1f \n", volume);
    printf("A area total desse cubo e: %1.f \n", aretotal);


    return 0;
}