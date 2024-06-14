#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]){
  //declara la variable
  int a = atoi(argv[1]);
  //si es negativo lo multiplica por -1
  if (a < 0){
    a *= -1;
  }
  printf("%i\n", a);
  return 0;
}
