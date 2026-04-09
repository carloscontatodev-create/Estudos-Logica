#include <stdio.h>



int main(){



    int carga[5], maior=0;



    for(int i=0;i<=4;i++){

        printf("Digite a %d carga levantada (kg): \n", i+1);

        scanf("%d", &carga[i]);

    }

    for (int j=0;j<=4;j++){

        if (carga[j]>maior){

            maior = carga[j];

        }

    }



    printf ("A maior carga levantada foi: %d\n", maior);



    return 0;

}