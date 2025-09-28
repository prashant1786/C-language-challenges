#include<stdio.h>

int main() {
  int rows;
  printf("Welcome to printing patterns\n");
  printf("Please enter the no of rows: ");
  scanf("%d", &rows);

  printf("Here is the right half pyramid");
  for (int i = 1; i <= rows; i++) {
    printf("\n");
    for (int j = 0; j < i; j++) {
      printf("* ");
    }
  }

  printf("\n\nHere is the Reverse right half pyramid");
  for (int i = 0; i < rows; i++) {
    printf("\n");
    for (int j = 0; j < rows - i; j++) {
      printf("* ");
    }
  }

  printf("\n\nHere is the left half pyramid");
  for (int i = 1; i <= rows; i++) {
    printf("\n");
    for (int k = 0; k < rows - i; k++) {
      printf("  ");
    }
    for (int j = 0; j < i; j++) {
      printf("* ");
    }
  }

  return 0;
}


// #include<stdio.h>
// int main(){
//   printf("Right Half Pyramid : \n");
//   for(int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//       printf("* ");
//     }
//     printf("\n");
//   }
//   printf("\n");

//   printf("Reverse Right Half Pyramid : \n");
//   for(int i=5;i>0;i--){
//     for(int j=1;j<=i;j++){
//       printf("* ");
//     }
//     printf("\n");
//   }

//   printf("\n");
//   printf("Left Half Pyramid : \n");
//   for(int i=1;i<=5;i++){
//     for(int j=1;j<=5;j++){
//       if(j<=5-i){
//         printf("  ");
//       }
//       else{
//         printf(" *");
//       }
//     }
//     printf("\n");
//   }

//   return 0;
// }