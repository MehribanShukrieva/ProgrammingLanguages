#include<stdio.h>

//Program to find the number of consonants and vowels;;
int main(){
	char str[100];
	int i = 0,  cons = 0, vowel = 0;
	printf("Input a string:");
	gets(str);
	while (str[i]!='\0'){
		if (str[i]=='A'||str[i]=='a'||str[i]=='I'||str[i]=='i'||str[i]=='E'||str[i]=='e'||str[i]=='O'||str[i]=='o'||str[i]=='u'||str[i]=='U')
		vowel++;
		else
		cons++;
		i++;
	}
	//Display the number of vowels and consonants
	printf("\n The number of vowels in string: %d", vowel);
	printf("\n The number of consonants in string: %d", cons);
	return 0;
}
