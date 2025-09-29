#include<stdio.h>
float sum(int,int,int,int,int);
float get_avg(int,int,int,int,int);
int main(){
int num1,num2,num3,num4,num5;
printf("Average of Five Interger\n");
printf("Enter first Number : ");
scanf("%d",&num1);
printf("Enter second Number : ");
scanf("%d",&num2);
printf("Enter third Number : ");
scanf("%d",&num3);
printf("Enter fourth Number : ");
scanf("%d",&num4);
printf("Enter fifth Number : ");
scanf("%d",&num5);
  float avergae=get_avg(num1,num2,num3,num4,num5);
  printf("%f",avergae);
  return 0;
  
}
float sum(int a,int b,int c,int d,int e){
  return a+b+c+d+e;
}
float get_avg(int a,int b,int c,int d,int e){
  return sum(a,b,c,d,e)/5;
}