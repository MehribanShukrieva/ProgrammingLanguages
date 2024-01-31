#include <stdio.h>
int SayiKontrol(int sayi) {
    int basamak = sayi % 10;
    sayi /= 10;
    while (sayi > 0) {
        if (basamak != sayi % 10) {
            return 0;
        }
        sayi /= 10;
    }
    return 1;
}
int main(){
	int A[100], i;
	printf("Dizinin 5 elemanini giriniz: ");
	for (i=0; i<5; i++){
		scanf("%d", &A[i]);
	}
//	int A[10] = {233, 43, 777, 81, 999999, 36, 90, 88, 11, 61};
	for (int i=0; i<10; i++){
		if (SayiKontrol(A[i]) == 1){
			printf("%d >> tum basamaklari  esit\n", A[i]);
		}
		else {
			printf("%d >> tum basamaklari esit degil\n", A[i]);
		}}
		return 0;
}

