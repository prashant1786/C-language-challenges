#include<stdio.h>
int main(){

  float grade;
  printf("Enter Your Grade(0-100) :");
  scanf("%f",&grade);
  
  if(grade<0&&grade>100){
    printf("Invalid Grade");
  }
  else if(grade>90){
    printf("Grade A");
  }
  else if(grade>75){
    printf("Grade B");
  }
  else if(grade>60){
    printf("Grade C");
  }
  else if(grade>30){
    printf("Grade D");
  }
  else{
   printf("Grade F");

  }

  return 0;
}