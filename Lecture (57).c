#include<stdio.h>
struct number{
	int x;
	float y;
};
int main(){
	struct number n1;
	n1.x=12;
	n1.y=34.556;
	scanf("%d",&n1.x);
	scanf("%f",&n1.y);
	printf("%d   %f",n1.x,n1.y);
}

