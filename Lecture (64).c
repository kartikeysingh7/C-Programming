//Read a structure person containing name, address, age.Create a function outside the structure to 
//display all this value and pass parameter as structure function.
#include<stdio.h>
struct person{
	char name[20];
	int age;
	char address[50];
};
void display(struct person p){
	printf("%s\n",p.name);
	printf("%d\n",p.age);
	printf("%s\n",p.address);
}
int main(){
	struct person p1;
	scanf("%s",&p1.name);
	scanf("%d",&p1.age);
	scanf("%s",&p1.address);
	display(p1);
}


