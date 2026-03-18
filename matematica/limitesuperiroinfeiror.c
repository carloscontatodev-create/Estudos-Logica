#include <stdio.h>

int main(){

    int limite, inferior, numero;

    printf("De um limite Superior \n");
    scanf("%d", &limite);
    printf("De um limite Inferior\n");
    scanf("%d", &inferior);
    printf("De um numero agora: \n");
    scanf("%d", &numero); 
    
    if (numero<inferior){
        printf("Esse numero passou do limite inferior \n");
    }
    else if (numero>limite){
        printf("Esse numero passou do limite superior \n");
    }
    else {
        printf("O seu numero e %.0d \n", numero);
    }





    return 0;
}