#include<stdio.h>
//Write the function that finds how many vowels are in the word sent by the user.
int countvowels(char*str){
	int i=0, vowel=0;
	while(str[i]!='\0'){
		if (str[i]=='A'||str[i]=='a'||str[i]=='I'||str[i]=='i'||str[i]=='E'||str[i]=='e'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
		{
			vowel++;
		}
		i++;
	}
	return vowel;
}
int main(){
	char str[100];
	printf("Input a string: ");
	gets(str);
	printf ( "Number of vowels in entered string : %d", countvowels(str));
	return 0;
}
