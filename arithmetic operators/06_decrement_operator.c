#include <stdio.h>

int main(void){
  // DECREMENT OPERATOR

  int x = 3;
  int y = 6;
  int z = 10;

  x-=3;
  x = y / 2;

  y = x * 2;
  x = y / 2;

  printf("%d\n", x);

  return 0;
}