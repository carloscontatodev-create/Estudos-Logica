#include <stdio.h>

int main(){

    int matricula[5], novaMatricula;

    for (int i=0;i<=4;i++){
        printf("Digite o numero da matricula: \n");
        scanf("%d", &novaMatricula);
        int bandeira=0;

        for (int j=0;j<=i-1;j++){
            if (novaMatricula == matricula[j]){
                bandeira = 1;
                break;
            }
        }

            if (bandeira == 1){
                printf("Matricula ja ativa, por favor registre outra!\n");
                i--;
            }
            if (bandeira == 0) {
                printf("Parabens, matricula feita com sucesso!\n");
                matricula[i] = novaMatricula;
            }
        }

    for (int z=0;z<=4;z++){
        printf("As respectivas matriculas sao: %d\n", matricula[z]);
    }




    return 0;
}