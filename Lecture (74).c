/*#include<stdio.h>
int main(){
	FILE *fp;
	fp=fopen("zero123.txt","w");
	fprintf(fp,"Computer Programming");
	fclose(fp);
}*/


/*#include<stdio.h>
int main(){
	char buff[255];
	FILE *f1;
	f1=fopen("zero123.txt","r");
	while(fscanf(f1,"%s",buff)!=EOF){
		printf("%s",buff);
	}
	fclose(f1);
}*/


/*#include<stdio.h>
int main(){
	FILE *f2;
	f2=fopen("zero123.txt","a");
	fprintf(f2,"hello world  ");
	fclose(f2);
}*/


/*#include<stdio.h>
int main(){
	FILE *f1;
	int regno;
	char name[20];
	float percentage;
	f1=fopen("zero123.txt","w");
	printf("enter regno\n");
	scanf("%d",&regno);
	fprintf(f1, "%d\n",regno);
	printf("enter name\n");
	scanf("%s",&name);
	fprintf(f1,"%s\n",name);
	printf("enter percentage\n");
	scanf("%f",&percentage);
	fprintf(f1,"%f\n",percentage);
	fclose(f1);
}*/


