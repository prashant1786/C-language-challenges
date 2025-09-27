#include<stdio.h>
int main(){
  int num1,num2;
  printf("Enter First Number : ");
  scanf("%d",&num1);
  printf("Enter Second Number : ");
  scanf("%d",&num2);
  printf("Here are the result of operations\n");
  printf("Addition of %d and %d is %d\n",num1,num2,(num1+num2));
  printf("Subtraction of %d and %d is %d\n",num1,num2,(num1-num2));
  printf("Multipication of %d and %d is %d\n",num1,num2,(num1*num2));
  printf("Division of %d and %d is %d\n",num1,num2,(num1/num2));
  printf("Modulus of %d and %d is %d\n",num1,num2,(num1%num2));
  return 0;
}