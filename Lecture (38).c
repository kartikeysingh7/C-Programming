#include<stdio.h>
int sum(int *a,int *b);
int main(){
	int a1,b1;
	scanf("%d %d",&a1,&b1);
	printf("%d",sum(&a1,&b1));
}
int sum(int *a,int *b){
	return *a + *b;
}
