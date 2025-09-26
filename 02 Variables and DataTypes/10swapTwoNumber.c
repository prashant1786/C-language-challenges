#include<stdio.h>
int main(){
  int num1;
  int num2;

  printf("Enter First Number:");
  scanf("%d",&num1);
  printf("Enter second Number:");
  scanf("%d",&num2);
  printf("Before Swaping %d %d \n",num1,num2);
  int temp=num1;
   num1=num2;
   num2=temp;
  printf("After Swaping %d %d\n",num1,num2);

  return 0;
}