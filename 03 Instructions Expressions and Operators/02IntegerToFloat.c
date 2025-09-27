#include<stdio.h>
int main(){
  int num=5;
  printf("Enter a Integer Num : ");
  scanf("%d",&num);
  float floatingNum=num;
  // printf("Given Integer Number %d and Converted Floating Number %f",num,floatingNum);
  printf("Given Integer Number %d and Converted Floating Number %f",num,((float)num));
  return 0;
}