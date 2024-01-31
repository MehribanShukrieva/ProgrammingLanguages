#include<stdio.h>
int main(){
	int  tam;
	float n, ondalik;
	printf("Bir sayi giriniz:");
	scanf("%f", &n);
	tam=n;
	ondalik=n-tam;
	printf ("Tam kisim:%d", tam);
	printf("\nOndalik kisim:%.3f",ondalik);
	
	return 0;
}
