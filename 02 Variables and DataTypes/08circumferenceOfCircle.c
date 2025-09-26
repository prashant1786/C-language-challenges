#include<stdio.h>
//#define PI=3.14159;//constant using define header (change PI's value at preprocessiong )
int main(){
  const float PI=3.14159;// Constant using const (compile time)
  float circumference;
  float radius;
  printf("Enter Radius of Circle :");
  scanf("%f",&radius);
  circumference=2*radius*PI;
  printf("Circumference of Circle is %f",circumference);
  return 0;
}