#include<stdio.h>

int main() {
  int arr[10];
  printf("Welcome to Max and Min of Array\n");
  for (int i = 0; i < 10; i++) {
    printf("Please enter %dth element: ", (i + 1));
    scanf("%d", &arr[i]);
  }

  int max = arr[0];
  int min = arr[0];
  for (int i = 1; i < 10; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  printf("The value of max is %d and min is %d", max, min);
  return 0;
}


// #include<stdio.h>

// int main(){
//   int marks[]={90,96,98,84,91,81,79};
//   int markCount=sizeof(marks)/sizeof(marks[0]);
//   int max=0,min=100;
//   float avg;
//   for(int i=0;i<markCount;i++){
//     if(marks[i]>=max){
//       max=marks[i];
//     }
//     if(marks[i]<=min){
//       min=marks[i];
//     }
//   }
 
//   printf("\nmax: %d\nmin: %d",max,min);
//   return 0;
// }