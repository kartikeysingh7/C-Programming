//Write a C program to find a position of given key value in the array
#include<stdio.h>
void main(){
	int a[10]={2,6,4,8,10,12,89,68,45,37};
	int i,loc=-1,key;
	printf("Enter integer value to search in array");
	scanf("%d",&key);
	for (i=0;i<10;i++){
		if (a[i] == key){
			loc=i+1;
			break;
		}
	}
	if (loc!=-1){
		printf("Element found at %d",loc);
	}
	else{
		printf("Element not found");
	}
}


