#include <stdio.h>

int main(){

    int senha, usuario;

    printf("Digite o usuario e senha: \n");
    scanf("%d %d", &senha, &usuario);

    
    if (senha == 1234){
        printf("Login aprovado!\n");
    }
    else{
        printf("Senha errado!\n");
    }
    if (usuario == 999){
        printf("Login aprovado!\n");
    }
    else {
        printf("Senha errado\n");
    }


    return 0;
}