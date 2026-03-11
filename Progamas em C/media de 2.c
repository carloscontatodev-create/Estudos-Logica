#include <stdio.h>

int main() {

float b1, b2, media;
  
printf("Digite a primeira nota:\n ");
  scanf("%f", &b1);
printf("Digite a segunda nota:\n ");
  scanf("%f", &b2);

media = (b1+b2)/2;

printf("A sua media e: %.2f\n", media);
  
if(media >= 6){
  printf("Aprovado\n");
}  else{
  printf("Reprovado\n");
}
    return 0;
}