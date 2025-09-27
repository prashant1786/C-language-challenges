#include<stdio.h>
int main(){
  float principal,rate,time;
  float simpleInterest;
  printf("Enter principal Amount :");
  scanf("%f",&principal);
  printf("Enter rate of Interest :");
  scanf("%f",&rate);
  printf("Enter duration :");
  scanf("%f",&time);
  simpleInterest=((float)1/100)* principal * rate * time;
  printf("Simple Interest : %.2f",simpleInterest);
  printf("\nTotal Final Amount After %.1f Year is : %.2f",time,principal+simpleInterest);
  return 0;
}