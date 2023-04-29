//Write a user defined function to print value of the input in words like if input is 1 print it as one and given range is 1 to 7 (use call by value method).

#include<stdio.h>
int name(int num);
int main(){
	int n;
	scanf("%d",&n);
	name(n);
}
int name(int num){
	switch(num){
		case 1:
			printf("one");
			break;
		case 2:
			printf("two");
			break;
		case 3:
			printf("three");
			break;
		case 4:
			printf("four");
			break;
		case 5:
			printf("five");
			break;
		case 6:
			printf("six");
			break;	
		case 7:
			printf("seven");
			break;					
	}
}
