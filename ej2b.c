#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) { 
    
    return a > b ? a : b; 
}

int main(int argc, char *argv[]){

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);

  printf("El maximo de %d, %d y %d es %d\n",a,b,c,max(c,max(a,b)));

  return 0;

}
