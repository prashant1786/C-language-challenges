#include<stdio.h>
int main(){
  int num;
  printf("Welcome To Table printer\n");
  printf("Enter A Number : ");
  scanf("%d",&num);
  int i=1;
  while(i<=10){
    printf("%d X %d = %d\n",num,i,num * i);
    i++;
  }
  printf("thankYou");
  return 0;
}