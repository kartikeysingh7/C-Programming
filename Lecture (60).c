#include<stdio.h>
struct car{
	char name[20];
	int year;
	float price;
}car1;
int main(){
	printf("Enter the data");
	gets(car1.name);
	scanf("%d",&car1.year);
	scanf("%f",&car1.price);
	printf("%s   %d   %f",car1.name,car1.year,car1.price);
}
