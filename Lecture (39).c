//Write a user defined function to swap two numbers by calling reffrence method in C language.

#include<stdio.h>
int sum(int *a,int *b);
int main(){
	int a1,b1;
	scanf("%d %d",&a1,&b1);
	printf("%d",sum(&a1,&b1));
}

int sum(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("%d %d",*a,*b);
}











                     
 
