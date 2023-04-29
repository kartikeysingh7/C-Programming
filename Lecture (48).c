//Consider an array with no. of elememts are 8 get the input from the user for the array.Define a function which display only the even index values.
#include<stdio.h>
int main()  
{  
    int arr[]={1, 2, 3, 4, 5};    
    int length=sizeof(arr)/sizeof(arr[0]);  
    printf("Elements of given array present on even position: \n");    
    for (int i=1;i<length;i=i+2){   
        printf("%d\n",arr[i]);   
    }   
    return 0;  
}  
