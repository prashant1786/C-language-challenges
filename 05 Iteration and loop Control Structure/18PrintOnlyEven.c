#include<stdio.h>

int main() {
  int max;
  printf("Welcome to printing even numbers\n");
  printf("Please enter the max number ");
  scanf("%d", &max);

  for (int i = 1; i <= max; i++) {
    if (i % 2 == 1) continue;
    printf("%d ", i);
  }

  return 0;
}


// #include<stdio.h>
// int main(){
//   int num;
//   int sum=0;
//   printf("Welcome To Even Num Calculator\n");
//   printf("Enter Number till Calculate: ");
//   scanf("%d",&num);
//   for(int i=1;i<=num;i++){
//     if(i%2==1){continue;}
//     sum=sum+i;
//   }
//   printf("%d \n",sum);
//   // printf("thankYou");
//   return 0;
// }