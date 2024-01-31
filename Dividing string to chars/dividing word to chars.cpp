#include<stdio.h>
int	main (){
	char str[100];
	int i;
	printf("Enter a string:");
	gets(str);
	printf("Entered characters are:");
	for(i=0; str[i]!='\0'; i++){
	printf(" '%c'\t", str[i]);}
	return 0;
}
