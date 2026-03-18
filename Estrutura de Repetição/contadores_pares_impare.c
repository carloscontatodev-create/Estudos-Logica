#include <stdio.h>

int main(){

int par, impar, num;

par = 0;
impar = 0;

for (int i=1;i<=10;i++){
    printf("Digite um numero: \n");
    scanf("%d", &num);

    if (num%2 == 0){
        par = par+1;
    }
    else{
        impar = impar+1;
    }

}

    printf("A quantidade de pares são: %d \n", par);
    printf("A quantidade de impares são: %d \n", impar);

return 0;
}