#include<stdio.h>
int main(){

  int num;
  printf("Enter A Number :");
  scanf("%d",&num);
  
  num%2==0?printf("%d is Even",num):printf("%d is odd",num) ;
  return 0;
}