//Create a structure of student profile which contains name, roll no and marks of 3 subject and precentage too.
#include<stdio.h>
struct std{
	int regno;
	char *name;
	int rollno;
	int age;
	float marks1;
	float marks2;
	float marks3;
	float percentage;
}std1;
int main(){
	std1.regno=12216766;
	std1.name="Kartikey";
	std1.rollno=52;
	std1.age=19;
	std1.marks1=25;
	std1.marks2=28;
	std1.marks3=23;
	std1.percentage=((std1.marks1+std1.marks2+std1.marks3)/90)*100;
	printf("  %d\n  %s\n  %d\n  %d\n  %f\n  %f\n  %f\n  %f\n",std1.regno,std1.name,std1.rollno,std1.age,std1.marks1,std1.marks2,std1.marks3,std1.percentage);
}
