#include<stdio.h>

int main() {
  float first, second;
  char opr;
  printf("Welcome to calculator\n");
  printf("Please enter the first number: ");
  scanf("%f", &first);
  printf("Now, enter the second number: ");
  scanf("%f", &second);
  printf("Finally, enter the operation(+, -, *, /): ");
  scanf(" %c", &opr);

  float res;
  int invalid = 0;
  switch (opr)
  {
  case '+': res = first + second;
    break;
  case '-': res = first - second;
    break;
  case '*': res = first * second;
    break;
  case '/': res = first / second;
    break;
  default:
    invalid = 1;
    break;
  }
  
  if (invalid == 0) {
    printf("The result is: %.2f", res);
  } else {
    printf("Invalid operator, please enter (+, -, *, /)");
  }
  return 0;
}


// #include<stdio.h>
// int main(){
//   int num1,num2;
//   char operation;
//   printf("Enter first number :");
//   scanf("%d",&num1);
//   printf("Enter second number :");
//   scanf("%d",&num2);
//   printf("Want to (Add,sub,multi,div)\n for Add->A\n for Sub->B\n for Multiply->C\n for Division->D \n -> (A/B/C/D) :");
//   scanf(" %c",&operation);//Space before %c is strategic it is used for not read wrong enter or space by %c

//   printf("%d and %d is two number\n",num1,num2);
//   switch (operation)
//   {
//   case 'A':
//     printf("Addition is %d",num1+num2);
//     break;
//   case 'B':
//     printf("Subtraction is %d",num1-num2);
//     break;
//   case 'C':
//     printf("Multiplication is %d",num1*num2);
//     break;
//   case 'D':
//     printf("Divison is %.2f",(float)num1/num2);
//     break;
  
//   default:
//       printf("Invalid Entry");
//       break;
//   }
//   return 0;
// }