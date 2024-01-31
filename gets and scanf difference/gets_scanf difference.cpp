#include<stdio.h>

int main(){
	char a[100], b[100], c[100];
	printf("Bir  cumle giriniz:");
	gets(a);
	printf("Cumleyi bir daha giriniz:");
	scanf("%s", b);
	printf("Cumleyi bir daha giriniz:");
	getchar(c);
	printf("gets ile alinan cumle: %s", a);
	printf("\nscanf ile alinan cumle: %s", b);
	printf("\ngetchar ile alinan cumle: %c", c);
	return 0;
}
