#include<stdio.h>
int main(){
	int a , *a1;
	scanf("%d",&a);
	a1=&a;
	printf("%d",&a);
	printf("%d\n",a);
	printf("a1=%d",a1);
	printf("a1 value=%d",*a1);
}
