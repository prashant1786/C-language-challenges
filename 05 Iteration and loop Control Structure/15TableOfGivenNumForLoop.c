#include<stdio.h>
int main(){
  int num;
  printf("Welcome To Table printer\n");
  printf("Enter A Number : ");
  scanf("%d",&num);
  for(int i=1;i<=10;i++){
    printf("%d X %d = %d\n",num,i,num * i);
  }
  printf("thankYou");
  return 0;
}