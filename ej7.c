#include <stdio.h>
#include <stdlib.h>

int main(void){

    for (int i = 1001; i < 2001; i++){
        printf("%d ", i);
        if (i % 5 == 0){
        printf("\n");
        }
    }

    return 0;
}