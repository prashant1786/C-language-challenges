#include<stdio.h>
int main(){

  int year;
  printf("Enter A Year :");
  scanf("%d",&year);

  // if(year%400==0){
  //   printf("Leap Year\n");
  // }
  // else if(year%100==0){
  //   printf("Not A Leap Year\n");
  // }
  // else if(year%4==0){
  //   printf("Leap Year\n");
  // }else {
  //   printf("Not A Leap Year\n");
  // }
  if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
   printf("%d is a leap year.", year);
  } else {
   printf("%d is a not leap year.", year);
  }

  return 0;
}