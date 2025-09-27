#include<stdio.h>
int main(){
  // float length,width;
  // length=2.5;
  // width=2.5;
  // printf("Perimeter of Recantangle is %f",2*(length+width));

  int a,b,c,d,perimeter;
  printf("Enter the first Side : ");
  scanf("%d",&a);
  printf("Enter the second Side : ");
  scanf("%d",&b);
  printf("Enter the third Side : ");
  scanf("%d",&c);
  printf("Enter the fourth Side : ");
  scanf("%d",&d);
  perimeter=a+b+c+d;
  printf("Perimeter of Your Shape : %d",perimeter);
 
  return 0;
}