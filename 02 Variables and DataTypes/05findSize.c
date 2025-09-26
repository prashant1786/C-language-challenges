#include<stdio.h>
int main(){
  short num0;
  int num1;
  float num2;
  long num3;
  double num4;
  char ch;
  printf("Size of Char :%lu \n",sizeof(ch));
  printf("Size of Short :%lu \n",sizeof(num0));
  printf("Size of Integer :%lu \n",sizeof(num1));
  printf("Size of Float :%lu \n",sizeof(num2));
  printf("Size of long :%lu \n",sizeof(num3));
  printf("Size of Double :%lu \n",sizeof(num4));
  return 0;
}