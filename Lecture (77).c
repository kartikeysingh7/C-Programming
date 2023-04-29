#include<stdio.h>
#include<string.h>
int main(){
	char str[30];
//	scanf("%s",str);
//	printf("\n%s",str);
gets(str);
puts(str);
printf("\n%d",strlen(str));
}
