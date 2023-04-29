#include<string.h>
int main(){
	char str[]="abcd";
	char ch1[3];
	strncpy(ch1,str,2);
	strcat(ch1,str);
	printf("%s",ch1);
}

