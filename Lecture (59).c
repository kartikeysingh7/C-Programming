#include<stdio.h>
struct car{
	char *name;
	int year;
	float price;
}car1;
int main(){
	car1.name = "Brezza";
	car1.year = 2018;
	car1.price = 234567.899;
	printf("%s   %d   %f",car1.name,car1.year,car1.price);
}
