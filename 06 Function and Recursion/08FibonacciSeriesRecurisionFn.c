#include<stdio.h>
int fibronnaci(int);

int main(){
int num;
printf("Fibronacci Series\n");
printf("Enter position till Print: ");
scanf("%d",&num);
  for(int i=0;i<=num;i++){
    printf(" %d ",fibronnaci(i));
  }
}
int fibronnaci(int a){
  
  if(a<=1){
   return a;
  }
  
  
  int current = fibronnaci(a-1)+fibronnaci(a-2);
  return current;
}
