#include<stdio.h>
int main(){
  char firstName[20];
  char lastName[20];
  int age ;  
  printf("Enter Your First Name : ");
  scanf("%s",firstName);
  printf("Enter Your Last Name : ");
  scanf("%s",lastName);
  printf("Enter Your Age : ");
  scanf("%d",&age);
  printf("Hi ! I am  %s %s and I am %d old",firstName,lastName,age);

  return 0;
}