#include<stdio.h>
int main(){

  //& is Address Operator to get address of any variable
  //* is Value At Address Operator to get Value of that address of any variable
  

  char ch;
  char* pnt=&ch;
  printf("Enter A Char : ");
  scanf("%c",pnt);
  
  printf("Given Char : %c",ch);
  printf("Given Char : %c",*pnt);

  
  return 0;
}