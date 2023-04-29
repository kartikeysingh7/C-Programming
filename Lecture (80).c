/*#include<string.h>
int main(){
	char str[]="abcd";
	printf("%d",strlen(str));
	char ch1[3];
	strcpy(ch1,str);
	printf("%s",ch1);

}*/

#include<string.h>
int main(){
	char str[]="abcd";
	printf("%d",strlen(str));
	char ch1[3];
	strncpy(ch1,str,2);
	printf("%s",ch1);

}
