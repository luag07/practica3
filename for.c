#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
        printf("%d", i + j); //n*m veces
    }
    printf("\n");

}
    return 0;
}