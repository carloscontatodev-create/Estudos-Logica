#include <stdio.h>

int main(){

    char c;
    
    printf("Digite uma letra: \n");
    scanf("%c", &c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            printf("E vogal\n");
        }
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        printf ("E vogal\n");
    }
    
    else{
        printf("E consoante\n");
    }

    system("pause");
    return 0;
}