#include<stdio.h>

void minmax(int*,int*,int*,int*);
int main(){
  int num1,num2,min=-1,max=-1;
  printf("Enter First Number : ");
  scanf("%d",&num1);
  printf("Enter Second Number : ");
  scanf("%d",&num2);
  printf("before \n min:%d max:%d",min,max);
  minmax(&num1,&num2,&min,&max);
  printf("\nAfter \n min:%d max:%d",min,max);
  return 0;
}
void minmax(int* a,int* b,int* min ,int* max){
  if( *a > *b ){
    *max=*a;
    *min=*b;
  }
  else{
     *max=*b;
    *min=*a;
 }
}





// #include <stdio.h>

// void minmax(int*, int*, int**, int**);  // Correct function signature

// int main() {
//     int num1, num2;
//     int *min, *max;  // ✅ Declare as int* (pointers)

//     printf("Enter First Number: ");
//     scanf("%d", &num1);

//     printf("Enter Second Number: ");
//     scanf("%d", &num2);

//     // Call the function with correct types
//     minmax(&num1, &num2, &min, &max);  // ✅ Pass int** args

//     printf("\nMin: %d\n", *min);
//     printf("Max: %d\n", *max);

//     return 0;
// }

// void minmax(int* a, int* b, int** min, int** max) {
//     if (*a > *b) {
//         *max = a;  // max points to a
//         *min = b;  // min points to b
//     } else {
//         *max = b;
//         *min = a;
//     }
// }
