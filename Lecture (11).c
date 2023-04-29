//Write a C program to print sum of 'n' natural numbers using for loop
#include<stdio.h>
int main()
{
    int a,i,s=0;
    scanf("%d",&a);
    for(i=1;i<=a;i=i+1){
    	s=s+i;
    	printf("%d",s);
	}
	    return 0;
}

