#include<stdio.h>
int func(char str[100], int i){
	for (i=0; str[i]!=NULL; i++){}
	for (; i>=0; i--){printf("%c", str[i]);}
}
int main(){
	char str[100]; int i;
	printf("Enter a string:");
	gets(str);
	printf("", func(str, i));
	return 0;
}
