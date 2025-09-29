#include<stdio.h>

int main() {
  const float MILE_PER_KM = 0.621371;
  long kms;
  printf("Welcome to Distance converter.\n");
  printf("Please enter the kms: ");
  scanf("%ld", &kms);

  long miles = kms * MILE_PER_KM;
  printf("The number of miles are %ld", miles);
  return 0;
}



// #include<stdio.h>
// int main(){
//   // long Kilometers,Miles;
//   // printf("KMs To Miles\n");
//   // printf("Enter KMs: ");
//   // scanf("%ld",&Kilometers);
//   // Miles=(Kilometers*10)/16;
//   // printf("Miles :%ld",Miles);
  
  
//   long double Kilometers,Miles;
//   printf("KMs To Miles\n");
//   printf("Enter KMs: ");
//   scanf("%LF",&Kilometers);
//   Miles=Kilometers*0.621371;
//   printf("Miles :%.3LF",Miles);


//   return 0;
// }