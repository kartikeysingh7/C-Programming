#include<stdio.h>
int main(){
	int s;
	printf("enter the size of the array: ");
	scanf("%d",&s);
	int a[s],i;
	for (i=0;i<s;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++){
		printf("%d",&a[i]);
	}
}
