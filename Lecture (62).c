#include<stdio.h>
struct std{
	char name[20];
	int regno;
	float m1[2];
}std[2];
int main(){
	int i,j;
	for(i=0;i<2;i++){
	printf("Enter the data");
	scanf("%s",&std[i].name);
	scanf("%d",&std[i].regno);
	for(j=0;j<2;j++){
	scanf("%f",&std[i].m1[j]);		
	}
}
for (i=0;i<2;i++){
	printf("%s  %d  %f  %f  %f \n",std[i].name,std[i].regno,std[i].m1[0],std[i].m1[1]);
}
}
