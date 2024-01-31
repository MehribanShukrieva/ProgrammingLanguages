/*
Klavyeden girilen N elemanli bir A dizisinin aritmetik ortalamasini bulup, bu aritmetik ortalamadan kucuk
elemanlari B dizisine ve buyuk olan elemanlari da C dizisine yerlestiren program;;
*/
#include<stdio.h>
int main(){
	int n, A[256], i, toplam;
	float ort=0.0;
	printf("Eleman sayisini giriniz:");
	scanf("%d", &n);
	for(i=0; i<n; i++){
	printf("Dizinin %d. elemanini giriniz:", i+1);
	scanf("%d", &A[i]);	
	}
	for(i=0; i<n; i++){
		toplam+=A[i];
		ort=(float)toplam/n;
	}
	printf("\nDizinin elemanlarinin ortalamasi: %.2f", ort);
	printf("\nOrtalamadan buyuk sayilar:");
	for(i=0; i<n; i++){
	if (ort<A[i]){
			printf("%d\t", A[i]);
	}
}
	printf("\nOrtalamadan kucuk sayilar:");
	for(i=0; i<n; i++){
	if (ort>A[i]){
			printf("%d\t", A[i]);
		}
	
}

	return 0;}

