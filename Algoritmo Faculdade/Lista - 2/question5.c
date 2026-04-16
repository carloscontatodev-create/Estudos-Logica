#include <stdio.h>

int main(){

    int menor, medio, maior, n1, n2, n3;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: \n");
    scanf("%d", &n3);

    menor = n1;
    maior = n1;
    
    if (n2<menor) {
        menor = n2;
    }
    if (n3<menor) {
        menor = n3;
    }
    if (n2>maior){
        maior = n2;
    }
    if (n3>maior){
        maior = n3;
    }

    medio = (n1+n2+n3)-maior-menor;
    
    printf("----------------------------------\n");
    printf("%d-Maior.\n%d-Medio.\n%d-Menor.\n", maior, medio, menor);
    printf("----------------------------------\n");
    
    system("pause");
    return 0;
}