#include<stdio.h>

int main() {
  int num;
  int sum = 0;
  printf("Welcome to Number Adder\n");

  do {
    printf("Please enter your number: ");
    scanf("%d", &num);
    sum += num;
  } while(num != 0);

  printf("The sum of all your numbers is: %d", sum);
  return 0;
}


// #include<stdio.h>
// int main(){
//   int num;
//   int total=0;
//   printf("Addition Till 0 \n");
//   do{
//     printf("Enter Number want to add(0 to quit) : ");
//     scanf("%d",&num);
//     total=total+num;
//   }while(num);
//   printf("Sum of Given Numbers is %d .\n",total);
//   return 0;
// }