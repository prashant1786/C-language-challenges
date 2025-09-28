#include<stdio.h>

int main() {
  int num;
  printf("Welcome to Sum of digits\n");
  printf("Please enter the number: ");
  scanf("%d", &num);

  int sum = 0;
  int copy = num;
  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }

  printf("The sum of digits of %d is %d", copy, sum);
  return 0;
}


// #include<stdio.h>
// int main(){
//   int num;
//   int temp;
//   printf("Sum Of The Digit\n");
//   printf("Enter A Number :");
//   scanf("%d",&num);
//   temp=num;
//   int digit;
//   int digitSum=0;
//   while(temp>0){
//     digit=temp%10;
//     temp/=10;
//     digitSum+=digit;
//   }
//   printf("%d\n",digitSum);
//   return 0;
// }