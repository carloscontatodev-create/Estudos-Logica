#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Inverte(char palavrra[]){

    int tamanho = strlen(palavrra);
    char temporario;
    int incio = 0;
    int fim = tamanho - 1;

    while(incio<fim){
    temporario = palavrra[incio];
    palavrra[incio] = palavrra[fim];
    palavrra[fim] = temporario;
    fim--;
    incio++;
    }
}

int main(){

    char palavrra [50];

    printf("Digite as palavras que deseja inverter: \n");
    fgets (palavrra, 50, stdin);

    for (int i=0;palavrra[i]!='\0';i++){
        if (palavrra[i] == '\n'){
            palavrra[i] = '\0';
        }
    }

    Inverte(palavrra);

    printf("%s", palavrra);



    return 0;
}