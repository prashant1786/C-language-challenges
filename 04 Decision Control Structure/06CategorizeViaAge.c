#include<stdio.h>
int main(){

  int age;
  printf("Enter Your Age :");
  scanf("%d",&age);
  if(age>60){
    printf("Senior");
  }
  else if(age>20){
    printf("Adult");
  }
  else if(age>13){
    printf("Teen");
  }
  else{
    printf("Child");
  }

  return 0;
}