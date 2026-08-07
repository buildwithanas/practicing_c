#include <stdio.h>

int main(){

  // FORMAT SPECIFIER ARE SPECIAL TOKENS THAT BEGINS WITH A % SYMBOL AND ARE USED TO SPECIFY THE TYPE OF DATA TO BE PRINTED OR SCANNED IN C PROGRAMMING LANGUAGE.
  
  int age = 18;
  float price = 35.65;
  double pi = 4.477482384885885954;
  char currency = '$';
  char name[] = "BuildWithAnas";

  printf("%d\n", age);
  printf("%f\n", price);
  printf("%lf\n", pi);
  printf("%c\n", currency);
  printf("%s\n", name);

  return 0;  
}