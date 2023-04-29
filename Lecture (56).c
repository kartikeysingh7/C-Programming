#include<stdio.h>
int main(){
	int a[10]={2,4,6,8,10,12,89,68,45,37};
	int pass, hold,i;
	printf("Data items in original order");
	for (i=0; i<10; i++){
		printf("%4d", a[i]);
	}
	for (pass=1;pass<10;++pass){
		for (i=0; i<10; i++){
			if (a[i]>a[i+1]){
				hold=a[i];
				a[i]=a[i+1];
				a[i+1]=hold;
			}
		}
	}
	printf("\nData items in ascending order");
	for (i=0; i<10; ++i){
		printf("%4d",a[i]);
	}
}

