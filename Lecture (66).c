#include<stdio.h>
union number{
	char name[20];
	int a;
	double a1;
};
int main(){
	union number n;
	n.a=5;
	n.a1=23.53635635;
	printf("%d  %f",n.a,n.a1);
}
