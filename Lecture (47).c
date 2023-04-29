//Consider an array a which consists of 5 elements get the input values from array and write a modified function to modify a value of the array.
#include<stdio.h>
int main(){
	int a[5],i;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	modify(a);
}
void modify(int b[]){
	int i;
	for(i=0;i<5;i++){
		b[i]=b[i]*2;
	}
	for(i=0;i<5;i++){
		printf("%d  ",b[i]);
	}
}
