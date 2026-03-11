#include <stdio.h>
#include <math.h>

int main(){

    int lado1, lado2, lado3, soma1, soma2, soma3, l, ll, lll;
    float area1, area1_2, semiperimetro;

    printf("Digite o primeiro lado: \n");
    scanf("%d", &lado1);
    printf("Digite o segundo lado: \n");
    scanf("%d", &lado2);
    printf("Digite o terceiro lado: \n");
    scanf("%d", &lado3);

    soma1 = lado1 + lado2;
    soma2 = lado1 + lado3;
    soma3 = lado2 + lado1;

    if (soma1>lado3 && soma2>lado2 && soma3>lado1){
        printf("Esse triangulo podera existir! \n");

        printf("Voce deseja calcular a area desse triangulo ? \n");

        l = lado1;
        ll = lado2;
        lll = lado3;

        if (l == ll && l == lll && ll == l && ll == lll && lll == l && lll == ll){
            
            area1 = pow(l, 2)*sqrt(3);
            area1_2 = area1/4;   
    
        }
        else if(l != ll && l != lll && ll != l && ll != lll && lll != l && lll != ll){

            semiperimetro = (l+ll+lll)/2;
            area1 = (semiperimetro-l)*(semiperimetro-ll)*(semiperimetro-lll)*semiperimetro;
            area1_2 = sqrt(area1);

        } 
        else{

            if (l == ll && ll != lll){
                area1_2 = l*lll/2;
            }
            else if (l == lll && l != ll){
                area1_2 =  l*ll/2;
            }
            else if (ll == lll && ll != l){
                area1_2 = ll*l/2;
            }
        }

        printf("A area desse triangulo sera %.2f \n", area1_2);


    }
    else{
        printf("Esse triangulo nao pode existir");
    }

    return 0;
}