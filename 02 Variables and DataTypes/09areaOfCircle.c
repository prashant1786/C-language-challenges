#include<stdio.h>
//#define PI=3.14159;//constant using define header (change PI's value at preprocessiong )
int main(){
  const float PI=3.14159;// Constant using const (compile time)
  float area;
  float radius;
  printf("Enter Radius of Circle :");
  scanf("%f",&radius);
  area=PI*radius*radius;
  printf("Circumference of Circle is %f",area);
  return 0;
}