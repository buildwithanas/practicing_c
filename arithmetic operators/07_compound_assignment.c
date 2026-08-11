#include <stdio.h>

int main(void){
  
  // COMPUND ASSIGNMENT OPERATORS
    int x = 2;
    int y = 5;
    int z = 10;

    z += x;
    y -= x;
    z *= x;
    x = z / y;

    printf("%d\n", x);

    return 0;
}