#include<stdio.h>
int main(){
	char str[100];
	int i;
	printf("Enter a string:");
	gets(str);
	for(i=0; str[i]!='\0'; i++ ){
	} printf("The length of the string is: %d", i);
	
	return 0;
}
