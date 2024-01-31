#include<stdio.h>
//Program to find if two entered strings are same or not;;
int main(){
	char str[100], str2[100];
	int i, f=0;
	printf("Input the string : ");
	gets(str);
	printf("Input another string: ");
	gets(str2);
	for (i=0; str[i]!='\0'; i++){
		if (str[i]!=str2[i]){
			f=1;
			break;
		}}
	if (f==1)
		printf("Strings are not same;");
	else printf("Strings are same;");
	
	
	return 0;
}
