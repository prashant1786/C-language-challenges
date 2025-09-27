#include<stdio.h>
int main(){

  int num1,num2;
  printf("Enter First Number :");
  scanf("%d",&num1);
  printf("Enter Second Number :");
  scanf("%d",&num2);
  
  // num1>num2?printf("%d is greatest",num1):printf("%d is greatest",num2) ;

  int min = num1 < num2 ? num1 : num2;
  printf("Minimum of the two is: %d", min);
  return 0;
}