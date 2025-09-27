#include<stdio.h>
int main(){

  int num;
  printf("Enter A Number :");
  scanf("%d",&num);

  // num>0?printf("%d's Absolute Number is %d",num,num):printf("%d's Absolute Number is %d",num,(-num)) ;
    printf("%d is the absolute value", (num > 0 ? num : -num));
  return 0;
}