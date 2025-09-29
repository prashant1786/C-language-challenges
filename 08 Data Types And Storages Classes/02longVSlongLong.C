#include<stdio.h>
long factroial(int);
long long longFactroial(int);
int main(){
 
  int num;
  printf("Enter Num to Factorial : ");
  scanf("%d",&num);
  printf("Long : %ld",factroial(num));
  printf("\nLong Long : %lld",longFactroial(num));
  
  return 0;
}
long factroial(int a){
  if(a<=1){
    return 1;
  }
  return a*factroial(a-1);
}
long long longFactroial(int a){
 if(a<=1){
    return 1;
  }
  return a*longFactroial(a-1);
}