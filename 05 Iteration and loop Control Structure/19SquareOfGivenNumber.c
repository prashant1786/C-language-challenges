#include<stdio.h>

int main() {
  int num;
  printf("Welcome to the world of Squares\n\n");
  while (1) {
    printf("\nPlease enter the number: ");
    scanf("%d", &num);
    if (num == -1) break;
    printf("The square of %d is %d", num, num * num);
  }
  printf("\n Bye Bye");
  return 0;
}


// #include<stdio.h>
// int main(){
//   int num;
//   int sqr;
//   printf("Square Calculator \n");
//   do{
//     printf("Enter Number want to Square(-1 to quit) : ");
//     scanf("%d",&num);
//     if(num==(-1)){
//       break;
//     }
//     sqr=num*num;
//   printf("Square of %d Numbers is %d .\n",num,sqr);
  

//   }while(1);
//   printf("Exit\n");
  
//   return 0;
// }