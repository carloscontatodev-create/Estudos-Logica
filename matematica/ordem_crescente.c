#include <stdio.h>

int main(){

    int n1, n2, n3, n4, n5, tempo;

    printf("Digite os 5 numeros que deseja deixar em ordem crescente: \n");
    scanf("%d %d %d %d %d", n1, n2, n3, n4, n5);

    if (n1>n2){
        tempo = n1;
        n1 = n2;
        n2 = tempo;
    }
    if (n1>n3){
        tempo = n1;
        n1 = n3;
        n3 = tempo;
    }
    if (n1>n4){
        tempo = n1;
        n1 = n4;
        n4 = tempo;
    }
    if (n1>n5){
        tempo = n1;
        n1 = n5;
        n5 = tempo;
    }
    if (n2>n3){
        tempo = n2;
        n2 = n3;
        n3 = tempo;
    }
    if (n2>n4){
        tempo = n2;
        n2 = n4;
        n4 = tempo;
    }
    if (n2>n5){
        tempo = n2;
        n2 = n2;
        n5 = tempo;
    }
    if (n3>n4){
        tempo = n3;
        n3 = n4;
        n4 = tempo;
    }
    if (n3>n5){
        tempo = n3;
        n3 = n5;
        n5 = tempo;
    }
        if (n4>n5){
        tempo = n4;
        n4 = n5;
        n5 = tempo;
    }

    printf("Em ordem crescente e igual a %d %d %d %d %d \n", n1, n2, n3, n4, n5);

    return 0;
}