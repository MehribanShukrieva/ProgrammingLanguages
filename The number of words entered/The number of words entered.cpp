#include<stdio.h>
int main(){
	char str[100];
	int i=0; int word=1;
	printf("Enter a word/sentence:");
	gets(str);
	while(str[i]!='\0'){
		if (str[i]==' '|| str[i]=='\n'|| str[i]=='\r'){
			word++;
		}
		i++;
	}
	printf("The number of words entered:%d", word);
	return 0;
}
