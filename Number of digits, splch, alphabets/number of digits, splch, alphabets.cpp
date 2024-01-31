#include<stdio.h>
//program to count the number of alphabets, special characters and numbers in entered string;;
int main(){
	char str[100];
	int alph=0, n=0, splch=0, i=0;
	printf("Input the string:");
	gets(str);
	while (str[i]!='\0'){
		if ((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			alph++;}
		else if (str[i]>='0'&&str[i]<='9'){
			n++;}
		else { 
			splch++; }	
		i++;}
		printf("\nThe number of alphabets: %d", alph);
		printf("\nThe number of digits: %d", n);
		printf("\nThe number of special characters: %d", splch);
	return 0;
}
