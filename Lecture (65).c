//Create a student class which includes members like name, section, reg. no
#include<stdio.h>
struct stud{
	char name[20];
	char section[2];
	int regno;
}s1,*s;
int main(){
	s=&s1;
	scanf("%s",&s->name);
	scanf("%s",&s->section);
	scanf("%d",&s->regno);
	printf("%s  %s  %d  ",s->name,s->section,s->regno);
}

