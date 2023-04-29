//write a c program to take a input from the user using scanf anf print the value in array
#include<stdio.h>
int main(){
	int a[5];
	int i;
	printf("enter the arrays values\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("%d  ",a[i]);
	}
}
