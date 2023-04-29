#include<stdio.h>
int main(){
	int a=45;
	int *aptr;
	aptr=&a;
	printf("%d\n",&a);//address of a
	printf("%d\n",a);//value of a
	printf("%d\n",aptr);//address of a
	printf("%d\n",*aptr);//value of a
}


