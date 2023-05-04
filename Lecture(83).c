//Create dynamic char array of 1000 characters then input a string in array then allocate array according
//to string length
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    int size;
	int j;
	int k;
printf("Enter size of elements:");
scanf("%d",&size);
ptr=(int*)calloc(size, sizeof(int));
if(ptr==NULL){
        printf("Memory not allocated .\n");
}
    else{
        printf("Memory successfully allocated using " 
		"calloc.\n");{
        for (j=0;j<size;++j){
            ptr[j]=j+1;
}
        printf("The elements of the array are: ");
        for (k=0;k<size;++k){
            printf("%d ",ptr[k]);
}
}
    return 0;
}
}
