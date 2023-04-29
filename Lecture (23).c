#include<stdio.h>  
 int main()    
{    
int n, reverse=0, m;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  while(n!=0)    
  {    
     m=n%10;    
     reverse=reverse*10+m;    
     n/=10;    
  }
      
  printf("Reversed Number: %d",reverse);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
return 0;  
} 
