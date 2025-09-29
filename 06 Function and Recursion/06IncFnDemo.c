#include<stdio.h>

int Inc(int);

int main(){
int num;
printf("Call By Value Example\n");
printf("Enter A Number : ");
scanf("%d",&num);

printf("Given Num :%d\n",num);
int Incresed=Inc(num);
printf("After Increment : \n ");
printf("original Num : %d and Incresed Num : %d",num,Incresed);

return 0;
  
}

int Inc(int a){
  return ++a;
}