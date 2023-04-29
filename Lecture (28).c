// Write a user defined function to count number og digits in a given inputs

#include<stdio.h>
int main()  
{  
   int n; 
   int count=0;    
   printf("Enter a number");  
   scanf("%d",&n);  
   while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
     
   printf("\n%d",count);  
    return 0;  
}  


