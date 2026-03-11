#include <stdio.h>

int main(){

    float salario, salarionovo, aumento, taxa1, taxa2, taxa3;

    printf("Digite o seu salario atual: \n");
    scanf("%f", &salario);

    taxa1 = 20;
    taxa2= 15;
    taxa3 = 10;
    salarionovo = salario;
    
    if (salarionovo<=1000){
        
        salarionovo = (salarionovo/100*taxa1)+salarionovo;

    }
    else if (salarionovo>=1001 && salarionovo<=3000){
        
        salarionovo = (salarionovo/100*taxa2)+salarionovo;

    }
    else{

        salarionovo = (salarionovo/100*taxa3)+salarionovo;

    }

    aumento = salarionovo-salario;

    printf("O salario antigo era de: %.0f \n", salario);
    printf("O valor de aumento foi de: %.0f \n", aumento);
    printf("O novo salario sera de: %.0f \n", salarionovo);

    return 0;
}