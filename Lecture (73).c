//Write a C program to display the value an array the array contains 5 elements print the value using it's
//memory location
#include<stdio.h>
int main(){
	int a[5];
    int i;
    printf("Enter elements: ");
    for (i=0; i<5; ++i);
    scanf("%d", a+i);
    for (i=0; i<5; ++i)
    printf("%d\n", *(a+i));
    return 0;
}
