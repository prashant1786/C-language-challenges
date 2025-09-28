#include<stdio.h>
int main(){
  int num;
  int cal;
  int sum=0;
  printf("Welcome To Odd/Even Sum Calculator\n");
  printf("Odd/Even Sum(odd>1/even>0) :");
  scanf("%d",&cal);
  printf("Enter A Number : ");
  scanf("%d",&num);
  for(int i=cal;i<=num;i=i+2){
    sum+=i;
  }

  printf("total Of Odd Number till %d is %d \n",num,sum);
  return 0;
}