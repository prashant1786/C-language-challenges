#include<stdio.h>
int main(){

  //& is Address Operator to get address of any variable
  //* is Value At Address Operator to get Value of that address of any variable
  int var=112;
  int* pnt=&var;

  printf("Before :\n Value : %d ,Location %p",var,pnt);
  
  *pnt=123;
  
  printf("\nAfter :\n Value : %d ,Location %p",var,pnt);
  
  return 0;
}