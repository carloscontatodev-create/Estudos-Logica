#include <stdio.h>

int main(){

    char sexo;
    float altura, pesoideal;

    printf("Digite -M- para masculino e -F- para feminino: \n");
    scanf("%c", &sexo);
    printf("Digite sua altura em metros: \n");
    scanf("%d", &altura);

    if (sexo == 'M'){
        pesoideal = (altura*72.7)-58;
    }
    else if (sexo == 'F'){
        pesoideal = (altura*62.1)-44.7;
    }
    else{
        printf("Por favor escolha M ou F");
    }

    printf("O seu peso ideal e: %f", pesoideal)


    return 0;
}