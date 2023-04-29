//Write a c program to find the total sum of the array
#include<stdio.h>
int main(){       
    int arr[]={11,12,13,14,15};     
    int sum=0;             
    int length=sizeof(arr)/sizeof(arr[0]);     
    for (int i=0;i<length;i++){     
       sum=sum+arr[i];    
    }      
    printf("Sum of all the elements of an array: %d",sum);    
    return 0;    
}    
