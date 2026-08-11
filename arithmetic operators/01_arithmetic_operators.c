#include <stdio.h>

int main(void){
  // ARITHMETIC OPERATORS
    int x = 2;
    int y = 5;
    int z = 10;

    z = x + y;
    y = z - x;
    z = y * x;
    x = z / y;

    printf("%d\n", x);

    return 0;
}