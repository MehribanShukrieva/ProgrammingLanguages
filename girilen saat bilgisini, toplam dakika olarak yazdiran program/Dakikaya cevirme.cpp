/*
Klavyeden "ss:dd:ss" formatinda girilen saat bilgisini, toplam dakika olarak yazdiran program;;
*/
#include<stdio.h>
int main(){
	//hh-hour;; mm-minute;; ss-saniye;;
	float hh, mm, ss;
	printf("'ss:dd:ss' formatinda saat bilgisini giriniz: ");
	scanf ("%f %f %f", &hh, &mm, &ss );
	mm=(float)mm+(hh*60)+(ss/60);
	printf("%.2f dakika", mm);
	return 0;
}
