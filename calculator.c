/**
 * Author:ABBASS KHAN
 * 
 * Date:2023/10/22
 *
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  while(1){ 
  double a, b, result;
  int choice;

  printf("Enter operand a: ");
  scanf("%lf", &a);

  printf("Enter operand b: ");
  scanf("%lf", &b);

  printf("Enter operation:\n");
  printf("(1) Addition\n");
  printf("(2) Subtraction\n");
  printf("(3) Multiplication\n");
  printf("(4) Division\n");
  printf("(5) Minimum\n");
  printf("(6) log_a(b)\n");
  scanf("%d", &choice);

  if(choice == 1) {
    printf("%f\n", a + b);
  } else if(choice == 2) {
    result = a - b;
    printf("%f\n", result);
  } else if(choice == 3) {
    printf("%f\n",a * b);
  } else if(choice == 4) {
    printf("%f\n",a / b);
  } else if(choice == 5) {
    result(a < b)? a : b;
    printf("min=%f\n", result);
  } else if(choice == 6) {
    result = log(b) / log(a);
    printf("loga(b) = %f\n",result);
  } else {
    printf("Please input a valid operator next time");
  }
  char Chooice;
  printf("You want to quite programe......\n");
  scanf("%c", &Choice);
  
  if(Choice == 'y' || Choice == 'Y'){
    break;
  }

printf("_____________\n");
__
  return 0;
}