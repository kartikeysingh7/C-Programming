//Create a  structure book which contains members as book name, year of publication and the price then 
//take input from user and print it into the file.
#include<stdio.h>
struct book{
	char book_name[20];
	int year;
	float price;
}b1;
int main(){
	printf("Enter the values");
	scanf("%s",&b1.book_name);
	scanf("%d",&b1.year);
	scanf("%f",&b1.price);
	FILE *ptr;
	ptr=fopen("zstu.txt","w");
	fwrite(&b1,sizeof(b1),1,ptr);
	fclose(ptr);
	ptr=fopen("zstu.txt","r");
	fread(&b1,sizeof(b1),1,ptr);
	printf("%s %d  %f",b1.book_name,b1.year,b1.price);
}
