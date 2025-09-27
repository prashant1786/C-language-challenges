#include<stdio.h>
int main(){
  float fahrenheit,celsius;
  // 
  printf("Enter Temprature of Fehrenheit :");
  scanf("%f",&fahrenheit);
  celsius=(fahrenheit-32)*((float)5/9);
  printf("Converted Celcius: %.3f",celsius);
  return 0;
}