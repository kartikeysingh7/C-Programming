#include<stdio.h>
struct person{
	int age;
	char name[20];
	struct stud{
		int regno;
	}s;
}p;
int main(){
	printf("Enter the values");
	scanf("%d",&p.age);
	scanf("%s",&p.name);
	scanf("%d",&p.s.regno);
	printf("%d  %s  %d",p.age,p.name,p.s.regno);
}

