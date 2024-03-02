#include<stdio.h>
int main(){
	char str1[100], str2[100];
	int i=0;
	printf("Input a string:");	
	gets(str1);
	while(str1[i]!='\0'){
		str2[i] = str1[i];
		i++; }
		str2[i] = '\0';
    printf("\nThe First string is : %s\n", str1);
    printf("The Second string is : %s\n", str2);
    printf("Number of characters copied : %d\n\n", i);
	return 0;
}
