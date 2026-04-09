#include <stdio.h>

int main(){

    int alvo;
    int halteres[6] = {5, 10, 15, 20, 25, 30};

    printf("Digite o peso alvo: (Max: 55kg)\n");
    scanf("%d", &alvo);
    
    for (int i=0;i<=5;i++){

        for (int j=i+1;j<=5;j++){
            
            if (halteres[i] + halteres[j] == alvo){
                
             printf ("Encontrado: %d (gaveta 2) + %d (gaveta 3) = %d", halteres[i], i,  halteres[j], j, alvo);
             return 0;
            }
        }
        
    }

    printf("Nenhum par de halter foi encontrado! \n");

    return 0;
}