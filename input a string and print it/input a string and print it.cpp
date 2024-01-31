#include<stdio.h>
int main(){
	char str[100];
	char str1[100];
	printf("Enter a string:");
	scanf( "%s", str);
	printf("Entered string is: %s", str);
	//the same but another method;;
	fflush(stdin);
	printf("\nEnter one more string:");
	gets(str);
	printf("Entered string is:");
	puts(str);
	return 0;
}
