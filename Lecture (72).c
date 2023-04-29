#include<stdio.h>
int main(){
	int a[]={23,45,1,2,67,89};
	printf("%d\n",a);
	printf("%d\n",a);
	printf("%d\n",&a[0]);
	printf("%d\n",a[0]);
	int *b;
	b=a;
	printf("%d\n",b);
	printf("%d",b[3]);
	printf("%d",*(b+1));
}
