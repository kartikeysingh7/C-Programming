// Write a user defined function to find the factorial of a input and return the factorial value

#include<stdio.h> 
int factor(); 
int main(){    
printf("factor = %d",factor());
}
int factor(){

 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
}   
