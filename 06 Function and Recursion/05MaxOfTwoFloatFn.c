#include<stdio.h>

float max(float,float);

int main(){
float x,y;
printf("Max of two Float Number\n");
printf("Enter first Float Num : ");
scanf("%f",&x);
printf("Enter second Float Num : ");
scanf("%f",&y);
  float bigger=max(x,y);
  printf("%f",bigger);
  return 0;
  
}

float max(float a,float b){
  return (a>b)?a:b;
}