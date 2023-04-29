#include<stdio.h>
int main(){
	int a=8, int *ptr;
	ptr=&a;
	printf("%d\n",a);
	printf("%d\n",&a);
	printf("%d\n",ptr);
	printf("%d\n",*ptr);
	*ptr=100;
	printf("%d\n",a);
	printf("%d\n",*ptr);
	 
}
