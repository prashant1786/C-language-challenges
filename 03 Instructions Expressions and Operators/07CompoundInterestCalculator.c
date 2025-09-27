#include<stdio.h>
#include<math.h>
int main(){
  float principal,rate,time;
  int compoundingPerYear;
  float compoundAmount;
  printf("Enter principal Amount :");
  scanf("%f",&principal);
  printf("Enter rate of Interest :");
  scanf("%f",&rate);
  printf("Enter duration :");
  scanf("%f",&time);
  printf("Enter componding per year :");
  scanf("%d",&compoundingPerYear);
  int n=compoundingPerYear;
  compoundAmount=principal*pow((1+rate/(n*100)),(n*time));
  printf("Compound Interest : %.2f",compoundAmount-principal);
  printf("\nTotal Final Amount After %.1f Year is : %.2f",time,compoundAmount);
  return 0;
}