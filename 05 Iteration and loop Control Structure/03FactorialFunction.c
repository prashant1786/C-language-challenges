#include<stdio.h>

int main() {
  int num;
  printf("Welcome to the world of Factorial\n");
  printf("Please enter the number: ");
  scanf("%d", &num);

  int i = 2;
  int fact = 1;
  while (i <= num) {
    fact *= i;
    i++;
  }

  printf("The factorial of %d is %d", num, fact);
  return 0;
}


// #include<stdio.h>
// int factor(int a);
// int main(){
  
//   int num;

//   printf("Welcome To Factorial Calculator\n");
//   printf("Enter A Number : ");
//   scanf("%d",&num);
//   int factorial = factor(num);
//   printf("%d's Factorial is : %d \n",num,factorial);
//   return 0;
// }
// int factor(int a){
//   int factorial=1;
//   for (int i = 1; i <= a; i++)
//   {
//     factorial*=i;
//   }
  
//   return factorial;
// }