#include <stdio.h>

int main(){

    int temp, hotbar[5] = {101, 102, 103, 104, 105};

    temp = hotbar [0];
    for (int i=1;i<=4;i++){
        hotbar[i-1] = hotbar[i];
        hotbar[5] = temp;
    }

    for (int j=0;j<=4;j++){
        printf("%d" hotbar[j]);
    }



    return 0;
}