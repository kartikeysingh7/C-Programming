//Write a recurssion function to print the reverse a number.

#include<stdio.h>
int sum=0,rem;
int rev(int num){
  if(num){
    rem=num%10;
    sum=sum*10+rem;
    rev(num/10);
}
  else
    return sum;
}
int main(){
  int num,revn;
  printf("Enter number:");
  scanf("%d",&num);
  revn=rev(num);
  printf("%d",revn);
  return 0;
}


