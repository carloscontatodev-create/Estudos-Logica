#include <stdio.h>

int main(){

    int n1, n2, n3, n4, primeiro, segundo, terceiro, quarto;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &n2)
    printf("Digite o terceiro numero: \n");
    scanf("%d", &n3)
    printf("Digite o quarto numero: \n");
    scanf("%d", &n4) 

    ///Primeiro

    primeiro = n1;

    if(n2<primeiro){
        primeiro = n2;
    }
    if(n3<primeiro){
        primeiro = n3;
    }
    if(n4<primeiro){
        primeiro = n4;
    }

    ///Quarto 
    
    quarto = n1;

    if(n2>quarto){
        quarto = n2;
    }
    if(n3>quarto){
        quarto = n3;
    }
    if(n4>quarto){
        quarto = n4;
    }

    /// Segundo e Terceiro






    return 0;
}