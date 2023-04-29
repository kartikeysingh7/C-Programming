#include<stdio.h>
struct number{
	int x;
	float y;
};
int main(){
	struct number n1={23,3.456};
	printf("%d   %f",n1.x,n1.y);
}

