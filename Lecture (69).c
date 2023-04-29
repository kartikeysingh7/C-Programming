#include<stdio.h>
int main(){
	int a=8;
	float b=234.56565;
	void *ptr;
	ptr=&a;
	printf("%d\n",(*(int*)(ptr)));
	ptr=&b;
	printf("%f",(*(float*)(ptr)));
	 
}
