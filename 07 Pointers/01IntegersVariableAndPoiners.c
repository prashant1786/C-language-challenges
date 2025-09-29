#include<stdio.h>
int main(){

  //& is Address Operator to get address of any variable
  //* is Value At Address Operator to get Value of that address of any variable
  int var;
  int* pnt=&var;

   printf("Enter A Number : ");
  scanf("%d",pnt);
  printf("\nValue of var : %d",var);
  printf("\nAddress of var : %p",&var);
  printf("\nValue at Address of var : %d",*(&var));
  
  printf("\nValue of pnt : %p ", pnt);
  printf("\nAddress of pnt : %p ",&pnt);
  printf("\nValue at pnt : %d ",*pnt);
  return 0;
}