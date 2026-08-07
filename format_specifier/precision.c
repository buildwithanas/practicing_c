#include <stdio.h>

int main(){
  
//HOW TO SET A PRECISION IN C USING FORMAT SPECIFIER

float price1 = 20.96;
float price2 = 14.65;
float price3 = -8.03;

printf("%+8.2f\n", price1);
printf("%+8.2f\n", price2);
printf("%+8.2f\n", price3);

return 0;

}