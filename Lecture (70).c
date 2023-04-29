#include<stdio.h>
int main(){
	int a=8;
	float b=234;
	int * const ptr=&a;
//	ptr=&b; it is a error bcz pointer is constant
	printf("%d",a);
	*ptr=200;
	printf("%d  %d",a,*ptr);
	 
}
