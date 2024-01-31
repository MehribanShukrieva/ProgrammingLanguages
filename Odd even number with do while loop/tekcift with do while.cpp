#include<stdio.h>
int main(){
	int n;
	printf("\nBir tam sayi giriniz:");
	do{
	scanf("%d", &n);
	if(n==0)
        printf("\nGirilen sayi 0");
		else if (n%2==0)
		printf("\nGirdiginiz sayi cift");
		else printf("\nGirdiginiz sayi tekdir. \nBaska bir islem icin tam sayi giriniz. \Cikis icin'-1'");}
		while(n!=-1);
	return 0;
}
