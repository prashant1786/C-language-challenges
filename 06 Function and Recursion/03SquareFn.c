#include<stdio.h>

int square(int);

int main(){

  int sqr=square(4);
  printf("%d",sqr);
  return 0;
  
}

int square(int a){
  return a*a;
}