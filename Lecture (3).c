//write a c program to check wheather no. is divisible by 4 and 6 if no. divisible by 4 and 6 print value is divisible

#include <stdio.h>
int main(){
	int c;
	scanf("%d",&c);
	if(c%4==0 | c%6==0)
	{
	
	printf("%d is divisuble by 4 and 6",c);
	}
	else{
		printf("%d is not divisible 4 and 6",c);
		}		
}
