#include<stdio.h>

int main(){
	int a, i;
	
	i=1;
	
	printf("bir sayi giriniz:");
	scanf("%d",&a);
	
    while (i<=a) {
    if (a % i==0)
    	printf("\n%d",i);
	i=i+1;
}
	
	
	
	
	
	
	return 0;
}

