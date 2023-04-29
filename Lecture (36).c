//Write a user defined function to check the number is adam or not (use call by value method).

#include<stdio.h>
int reverseDigits(int num){
   int r=0;
   while (num>0){
      r=r*10 + num%10;
      num/=10;
   }
   return r;
}
int main(){
   int a;
   scanf("%d",&a);
   int r=reverseDigits(a);
   if ((a*a)==(reverseDigits(r*r)))
    printf("Adam Number");
   else
    printf("Not an Adam Number");
   return 0;
}
