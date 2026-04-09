#include <stdio.h>

int main(){

    int serieSupinoInclinado[3];
    int serieSupinoReto[3];
    int serieCrucifixo[3];
    int serieCrossOver[3];
    int serieTricepsCorda[3];
    int serieExtensaoTriceps[3];
    int serieTricepsFrances[3];
    int volumeTotal[21];

for (int a=0;a<=2;a++){
        printf("Digite quantos KG fez a %d serie de Supino Inclinado: \n", a+1);
        scanf("%d", &serieSupinoInclinado[a]);
    }
    for (int b=0;b<=2;b++){
        printf("Digite quantos KG fez a %d serie de Supino Reto: \n", b+1);
        scanf("%d", &serieSupinoReto[b]);
    }
    for (int c=0;c<=2;c++){
        printf("Digite quantos KG fez a %d serie de Crucifixo: \n", c+1);
        scanf("%d", &serieCrucifixo[c]);
    }
    for (int d=0;d<=2;d++){
        printf("Digite quantos KG fez a %d serie de CrossOver: \n", d+1);
        scanf("%d", &serieCrossOver[d]);
    }
    for (int e=0;e<=2;e++){
        printf("Digite quantos KG fez a %d serie de Triceps Corda: \n", e+1);
        scanf("%d", &serieTricepsCorda[e]);
    }
    for (int f=0;f<=2;f++){
        printf("Digite quantos KG fez a %d serie de Extensao Triceps: \n", f+1);
        scanf("%d", &serieExtensaoTriceps[f]);
    }
    for (int g=0;g<=2;g++){
        printf("Digite quantos KG fez a %d serie de Triceps Frances : \n", g+1);
        scanf("%d", &serieTricepsFrances[g]);
    }

    int passar = 0;

    for (int i=0;i<=2;i++) {volumeTotal[passar++] = serieSupinoInclinado[i];}
    for (int i=0;i<=2;i++) {volumeTotal[passar++] = serieSupinoReto[i];}
    for (int i=0;i<=2;i++) {volumeTotal[passar++] = serieCrucifixo[i];}
    for (int i=0;i<=2;i++) {volumeTotal[passar++] = serieCrossOver[i];}
    for (int i=0;i<=2;i++) {volumeTotal[passar++] = serieTricepsCorda[i];}
    for (int i=0;i<=2;i++) {volumeTotal[passar++] = serieExtensaoTriceps[i];}
    for (int i=0;i<=2;i++) {volumeTotal[passar++] = serieTricepsFrances[i];}

    int soma = 0;

    for (int i=0;i<=20;i++){
        soma += volumeTotal[i];
    }

    printf("O volume total pego foi de: %d\n", soma);

    return 0;
}