#include<stdio.h>
int main(){
	int a,b;
	char op;
	printf("Enter the numbers: ");
	scanf("%d\n",&a);
	scanf("%d\n",&b);
	scanf("%c",&op);
	switch(op){
		case '+':
			printf("%d + %d = %d",a,b,a+b);
			break;
		case '-':
			printf("%d - %d = %d",a,b,a-b);
			break;
		case '*':
			printf("%d * %d = %d",a,b,a*b);
			break;
		case '/':
			printf("%d / %d = %d",a,b,a/b);
			break;			
			default:
				printf("Invalid numbers");
							
	}
	return 0;
}
