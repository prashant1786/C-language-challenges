#include<stdio.h>
int main(){
  float floatNum1,floatNum2;
  printf("Enter First Floating Number : ");
  scanf("%f",&floatNum1);
  printf("Enter Second Floating Number : ");
  scanf("%f",&floatNum2);
  // printf("Product Of %f and %f is %f\n: ",floatNum1,floatNum2,(floatNum1*floatNum2));
  printf("Product Of %f and %f is %.2f\n: ",floatNum1,floatNum2,(floatNum1*floatNum2));//.2 => 2 round figure
 // printf("Product Of %f and %f is %.4f: ",floatNum1,floatNum2,(floatNum1*floatNum2));//.5 => 5 round figure
  return 0;
}