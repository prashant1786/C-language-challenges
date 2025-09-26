#include<stdio.h>
int main(){
  int num1,num2;
  printf("enter first number : ");
  scanf("%d",&num1);//by using & before variable we can save data in variable
  printf("Addres num 1 is %p\n",&num1);//by using & before variable we get address of variable
  printf("enter Second number : ");
  scanf("%d",&num2);
  printf("First number is %d and Second number is %d \n", num1,num2);
printf("Addres num 1 is %p",&num1);
  return 0;
}