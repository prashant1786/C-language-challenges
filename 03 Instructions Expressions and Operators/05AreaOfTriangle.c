#include<stdio.h>
int main(){
  float base,height,area;
  printf("Enter Base Of Triangle :");
  scanf("%f",&base);
  printf("Enter Height Of Triangle :");
  scanf("%f",&height);
  area=((float)1/2)* base * height ;
  printf("Area Of Triangle is : %.2f",area);
  return 0;
}