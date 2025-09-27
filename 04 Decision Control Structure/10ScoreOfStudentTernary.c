#include<stdio.h>
int main(){

  int score;
  printf("Enter Your Score :");
  scanf("%d",&score);
  
  // score>=80?printf("High"):(score>=50?printf("Medium"):printf("low")) ;

  printf("\nYour marks are in this category: ");;
  score > 80 ? printf("High") 
             : (score >= 50 ? printf("Moderate")
                            : printf("Low"));

  return 0;
}