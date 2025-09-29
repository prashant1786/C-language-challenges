#include<stdio.h>
void checkPalindrome(int);
int reverse(int,int);
int main(){
  int num;
printf("Palindrome check\n");
printf("Enter A Num: ");
scanf("%d",&num);
  checkPalindrome(num);
  return 0;
}
void checkPalindrome(int a){
  int reverseNum=reverse(a,0);
  
  printf("%s\n",(a==reverseNum)?"Palindrome":"Not Palindrome");
  
}
int reverse(int num,int rev){
  if(num==0){
    return rev;
  }
  int reminder=num%10;
  int newNum=num/10;
  int newRev=rev*10+reminder;
  return reverse(newNum,newRev);
}
