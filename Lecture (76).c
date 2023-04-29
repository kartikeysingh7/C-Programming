//Create structure person which contains name and age as the parameter.Create 5 records for given structure and write these 5 record 
//these records into file 
#include<stdio.h>
struct person{
	char name;
	int age;
}p1,p2,p3,p4,p5;
int main(){
	printf("Enter the values\n");
	scanf("%s\n",&p1.name);
	scanf("%d\n",&p1.age);
    printf("Enter the values\n");
	scanf("%s\n",&p2.name);
	scanf("%d\n",&p2.age);
	printf("Enter the values\n");
	scanf("%s\n",&p3.name);
	scanf("%d\n",&p3.age);
	printf("Enter the values\n");
	scanf("%s\n",&p4.name);
	scanf("%d\n",&p4.age);
	printf("Enter the values\n");
	scanf("%s\n",&p5.name);
	scanf("%d\n",&p5.age);
	FILE *ptr;
	ptr=fopen("person.txt","w");
	fwrite(&p1,sizeof(p1),1,ptr);
	fclose(ptr);
	ptr=fopen("person.txt","w");
	fwrite(&p2,sizeof(p2),1,ptr);
	fclose(ptr);
	ptr=fopen("person.txt","w");
	fwrite(&p3,sizeof(p3),1,ptr);
	fclose(ptr);
	ptr=fopen("person.txt","w");
	fwrite(&p4,sizeof(p4),1,ptr);
	fclose(ptr);
	ptr=fopen("person.txt","w");
	fwrite(&p5,sizeof(p5),1,ptr);
	fclose(ptr);
}
