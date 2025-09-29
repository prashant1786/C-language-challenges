#include<stdio.h>
int add(int,int,int,int);
int main(){

  int addition=add(4,1,2,3);
  printf("%d",addition);
  return 0;
  
}
int add(int a,int b,int c,int d){
  return a+b+c+d;
}